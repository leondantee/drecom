#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017f688
// Address: 0x17f688 - 0x17f820
void entry_0017f688_0x17f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f688_0x17f688");
#endif

    switch (ctx->pc) {
        case 0x17f71cu: goto label_17f71c;
        case 0x17f7e8u: goto label_17f7e8;
        default: break;
    }

    ctx->pc = 0x17f688u;

    // 0x17f688: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f68c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f68cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f690: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f698: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x17f698u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f69c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f6a0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f6a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17f6a8: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x17f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f6ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x17f6b0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x17F6B0u;
    {
        const bool branch_taken_0x17f6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6b0) {
            ctx->pc = 0x17F820u;
            return;
        }
    }
    ctx->pc = 0x17F6B8u;
    // 0x17f6b8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f6bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f6c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f6c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f6c8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17f6cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x17f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17f6d0: 0x24a60380  addiu       $a2, $a1, 0x380
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x17f6d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17f6d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x17f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f6dc: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x17f6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17f6e0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f6e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f6e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f6e8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f6ec: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x17f6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17f6f0: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x17f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17f6f4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f6f8: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f6fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f700: 0x90640154  lbu         $a0, 0x154($v1)
    ctx->pc = 0x17f700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17f704: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x17f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17f708: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17f708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f710: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x17f710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17f714: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F714u;
    SET_GPR_U32(ctx, 31, 0x17F71Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F71Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F71Cu) { return; }
    ctx->pc = 0x17F71Cu;
label_17f71c:
    // 0x17f71c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f720: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f720u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f724: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f728: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f72c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f730: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f734: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f73c: 0x90620154  lbu         $v0, 0x154($v1)
    ctx->pc = 0x17f73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17f740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f744: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f748: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17f74c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f74cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f750: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f758: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f75c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f760: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f764: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x17f764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x17f768: 0x24c21380  addiu       $v0, $a2, 0x1380
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x17f76c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f770: 0x90430154  lbu         $v1, 0x154($v0)
    ctx->pc = 0x17f770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f774: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f778: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f77c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f780: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17f784: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f788: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f78c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f78cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f790: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17f790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17f794: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x17f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f798: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f79c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f7a0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f7a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17f7a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f7ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f7b0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f7b4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f7b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f7b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f7bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f7c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f7c4: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f7c8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f7cc: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x17f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f7d0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x17f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17f7d4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f7d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f7dc: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f7e0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F7E0u;
    SET_GPR_U32(ctx, 31, 0x17F7E8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F7E8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F7E8u) { return; }
    ctx->pc = 0x17F7E8u;
label_17f7e8:
    // 0x17f7e8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f7ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f7ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f7f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f7f4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f7f8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f7fc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f800: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f804: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f808: 0x90620155  lbu         $v0, 0x155($v1)
    ctx->pc = 0x17f808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x17f80c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f810: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f814: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f818: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f818u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f81c: 0x0  nop
    ctx->pc = 0x17f81cu;
    // NOP
    ctx->pc = 0x17f820u;
}
