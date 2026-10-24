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

// Function: entry_0018b8dc
// Address: 0x18b8dc - 0x18b9ac
void entry_0018b8dc_0x18b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b8dc_0x18b8dc");
#endif

    switch (ctx->pc) {
        case 0x18b958u: goto label_18b958;
        default: break;
    }

    ctx->pc = 0x18b8dcu;

    // 0x18b8dc: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x18b8dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18b8e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8e4: 0xa0430094  sb          $v1, 0x94($v0)
    ctx->pc = 0x18b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b8e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b8ec: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x18b8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18b8f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b8f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b8f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b8fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b900: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18b900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18b904: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x18b908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b90c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18b910: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18b910u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b914: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x18b914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18b918: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18b918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b91c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18b91cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18b920: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b924: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x18b924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x18b928: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x18b928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b92c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b930: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18b934: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B934u;
    {
        const bool branch_taken_0x18b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b934) {
            ctx->pc = 0x18B9ACu;
            return;
        }
    }
    ctx->pc = 0x18B93Cu;
    // 0x18b93c: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b940: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b944: 0xa0430095  sb          $v1, 0x95($v0)
    ctx->pc = 0x18b944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b948: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18b948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b94c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b950: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B950u;
    SET_GPR_U32(ctx, 31, 0x18B958u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B950u, 0x18B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B958u;
label_18b958:
    // 0x18b958: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18b958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18b95c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b960: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x18b960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x18b964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b968: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x18b968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b96c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b970: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x18b970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18b974: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b978: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b97c: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x18b97cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x18b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18b984: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b988: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x18B988u;
    {
        const bool branch_taken_0x18b988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b988) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B990u;
    // 0x18b990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b994: 0x9223002b  lbu         $v1, 0x2B($s1)
    ctx->pc = 0x18b994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x18b998: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x18b998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18b99c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b9a0: 0xa222002b  sb          $v0, 0x2B($s1)
    ctx->pc = 0x18b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b9a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18B9A4u;
    {
        const bool branch_taken_0x18b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b9a4) {
            ctx->pc = 0x18BA04u;
            return;
        }
    }
    ctx->pc = 0x18B9ACu;
}
