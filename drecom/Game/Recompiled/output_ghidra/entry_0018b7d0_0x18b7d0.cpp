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

// Function: entry_0018b7d0
// Address: 0x18b7d0 - 0x18b87c
void entry_0018b7d0_0x18b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7d0_0x18b7d0");
#endif

    switch (ctx->pc) {
        case 0x18b84cu: goto label_18b84c;
        default: break;
    }

    ctx->pc = 0x18b7d0u;

    // 0x18b7d0: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x18b7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18b7d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7d8: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b7dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b7e0: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b7e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b7e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b7f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b7f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b7f8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b800: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b804: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b808: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b810: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b814: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b818: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b81c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b824: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b828: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B87Cu;
            return;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b838: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b83c: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x18b83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b840: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b844: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B844u;
    SET_GPR_U32(ctx, 31, 0x18B84Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B844u, 0x18B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B84Cu;
label_18b84c:
    // 0x18b84c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x18b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x18b850: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b854: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b85c: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b864: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x18b864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x18b868: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b86c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b870: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x18b870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b874: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x18B874u;
    {
        const bool branch_taken_0x18b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b874) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B87Cu;
}
