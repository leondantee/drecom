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

// Function: entry_0017f378
// Address: 0x17f378 - 0x17f500
void entry_0017f378_0x17f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f378_0x17f378");
#endif

    switch (ctx->pc) {
        case 0x17f404u: goto label_17f404;
        case 0x17f4ccu: goto label_17f4cc;
        default: break;
    }

    ctx->pc = 0x17f378u;

    // 0x17f378: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f37c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f37cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f380: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17f380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f384: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f388: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f38c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f390: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f394: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f398: 0x8c460158  lw          $a2, 0x158($v0)
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f39c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x17f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x17f3a0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17F3A0u;
    {
        const bool branch_taken_0x17f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3a0) {
            ctx->pc = 0x17F500u;
            return;
        }
    }
    ctx->pc = 0x17F3A8u;
    // 0x17f3a8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f3ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f3acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f3b0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f3bc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x17f3c0: 0x24c20380  addiu       $v0, $a2, 0x380
    ctx->pc = 0x17f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x17f3c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f3cc: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f3d0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f3d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f3d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f3d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f3e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f3e8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f3ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3f0: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f3f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f3f8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f3fc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F3FCu;
    SET_GPR_U32(ctx, 31, 0x17F404u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F404u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F404u) { return; }
    ctx->pc = 0x17F404u;
label_17f404:
    // 0x17f404: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f408: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f40c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f414: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f418: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f41c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f424: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f42c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f430: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f434: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f43c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f444: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f448: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f44c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f454: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f45c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f464: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17f468: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f46c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f470: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f470u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f474: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f47c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f480: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f484: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f48c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f490: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f494: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f498: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f49c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f49cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f4a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4a8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f4ac: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f4b0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4b8: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f4bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f4c0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f4c4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F4C4u;
    SET_GPR_U32(ctx, 31, 0x17F4CCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F4CCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F4CCu) { return; }
    ctx->pc = 0x17F4CCu;
label_17f4cc:
    // 0x17f4cc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f4d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f4d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f4e0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f4e4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4ec: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f4f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f4f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f4f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
    ctx->pc = 0x17f500u;
}
