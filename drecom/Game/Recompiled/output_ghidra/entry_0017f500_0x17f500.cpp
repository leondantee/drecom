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

// Function: entry_0017f500
// Address: 0x17f500 - 0x17f688
void entry_0017f500_0x17f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f500_0x17f500");
#endif

    switch (ctx->pc) {
        case 0x17f58cu: goto label_17f58c;
        case 0x17f654u: goto label_17f654;
        default: break;
    }

    ctx->pc = 0x17f500u;

    // 0x17f500: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f504: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f508: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f510: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f514: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f518: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f520: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x17f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f524: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x17f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17f528: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17F528u;
    {
        const bool branch_taken_0x17f528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f528) {
            ctx->pc = 0x17F688u;
            return;
        }
    }
    ctx->pc = 0x17F530u;
    // 0x17f530: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f534: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f538: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f540: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f544: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f548: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f54c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f550: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f554: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f558: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f55c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f55cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f560: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f568: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f56c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f570: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f578: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f57c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f580: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f584: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F584u;
    SET_GPR_U32(ctx, 31, 0x17F58Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F58Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F58Cu) { return; }
    ctx->pc = 0x17F58Cu;
label_17f58c:
    // 0x17f58c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f590: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f594: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f59c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f5a0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f5a4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5ac: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f5b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f5b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f5b8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f5bc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f5c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f5c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f5c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f5d0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f5d4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5dc: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f5e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f5e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f5ec: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17f5f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f5f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f5f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f5f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f5fc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f604: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f608: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f60c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f614: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f618: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f61c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f620: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f624: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f628: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f630: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f634: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f638: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f640: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f648: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f64c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F64Cu;
    SET_GPR_U32(ctx, 31, 0x17F654u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F654u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F654u) { return; }
    ctx->pc = 0x17F654u;
label_17f654:
    // 0x17f654: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f658: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f65c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f664: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f668: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f66c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f674: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f67c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f680: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f684: 0x0  nop
    ctx->pc = 0x17f684u;
    // NOP
    ctx->pc = 0x17f688u;
}
