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

// Function: entry_00178c40
// Address: 0x178c40 - 0x178d4c
void entry_00178c40_0x178c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c40_0x178c40");
#endif

    switch (ctx->pc) {
        case 0x178c54u: goto label_178c54;
        case 0x178c90u: goto label_178c90;
        default: break;
    }

    ctx->pc = 0x178c40u;

    // 0x178c40: 0x8fb30070  lw          $s3, 0x70($sp)
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178c44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x178c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x178c48: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x178c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178c4c: 0xc05e3d4  jal         func_178F50
    ctx->pc = 0x178C4Cu;
    SET_GPR_U32(ctx, 31, 0x178C54u);
    ctx->pc = 0x178F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F50u, 0x178C4Cu, 0x178C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C54u;
label_178c54:
    // 0x178c54: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x178c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x178c58: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x178c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x178c5c: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x178c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x178c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178c64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x178c70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x178c74: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x178c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c7c: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x178c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x178c80: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x178c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x178c84: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x178c88: 0xc05e4ac  jal         func_1792B0
    ctx->pc = 0x178C88u;
    SET_GPR_U32(ctx, 31, 0x178C90u);
    ctx->pc = 0x1792B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1792B0u, 0x178C88u, 0x178C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C90u;
label_178c90:
    // 0x178c90: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x178c90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x178c94: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178c98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178c9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x178ca0: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x178CA0u;
    {
        const bool branch_taken_0x178ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178ca0) {
            ctx->pc = 0x178F00u;
            return;
        }
    }
    ctx->pc = 0x178CA8u;
    // 0x178ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178cac: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178cbc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178cc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178cc4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ccc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x178cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x178cd0: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ce0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178ce4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178ce8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178cec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178cf0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x178cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x178cf4: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cf8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178d00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d04: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178d08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178d0c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x178d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x178d18: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d1c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x178D1Cu;
    {
        const bool branch_taken_0x178d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d1c) {
            ctx->pc = 0x178DD0u;
            return;
        }
    }
    ctx->pc = 0x178D24u;
    // 0x178d24: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x178d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x178d28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x178d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178d30: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x178D30u;
    {
        const bool branch_taken_0x178d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178d30) {
            ctx->pc = 0x178D90u;
            return;
        }
    }
    ctx->pc = 0x178D38u;
    // 0x178d38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178d3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D3Cu;
    {
        const bool branch_taken_0x178d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178d3c) {
            ctx->pc = 0x178D4Cu;
            return;
        }
    }
    ctx->pc = 0x178D44u;
    // 0x178d44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x178D44u;
    {
        const bool branch_taken_0x178d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d44) {
            ctx->pc = 0x178DD0u;
            return;
        }
    }
    ctx->pc = 0x178D4Cu;
}
