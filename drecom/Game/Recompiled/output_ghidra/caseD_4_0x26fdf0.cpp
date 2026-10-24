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

// Function: caseD_4
// Address: 0x26fdf0 - 0x26ff1c
void caseD_4_0x26fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26fdf0");
#endif

    switch (ctx->pc) {
        case 0x26fe10u: goto label_26fe10;
        case 0x26fe20u: goto label_26fe20;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe90u: goto label_26fe90;
        case 0x26fec8u: goto label_26fec8;
        case 0x26ff00u: goto label_26ff00;
        default: break;
    }

    ctx->pc = 0x26fdf0u;

    // 0x26fdf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fdf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fdf8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26fdfc: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x26fe00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fe00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26fe08: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26FE08u;
    SET_GPR_U32(ctx, 31, 0x26FE10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26FE08u, 0x26FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE10u;
label_26fe10:
    // 0x26fe10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26fe18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FE18u;
    SET_GPR_U32(ctx, 31, 0x26FE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FE18u, 0x26FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE20u;
label_26fe20:
    // 0x26fe20: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26fe24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fe28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26fe34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fe34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fe38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe3c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fe3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x26fe40: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fe40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26fe44: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26fe48: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fe48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fe4c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fe50: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FE50u;
    SET_GPR_U32(ctx, 31, 0x26FE58u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FE50u, 0x26FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE58u;
label_26fe58:
    // 0x26fe58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe60: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26fe64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fe68: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26fe6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fe6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fe70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe74: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fe74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x26fe78: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fe78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26fe7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fe80: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fe84: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fe88: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FE88u;
    SET_GPR_U32(ctx, 31, 0x26FE90u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FE88u, 0x26FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE90u;
label_26fe90:
    // 0x26fe90: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x26fe94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26fe94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fe98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fe9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fea0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26fea4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26fea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fea8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26feac: 0x94a30a02  lhu         $v1, 0xA02($a1)
    ctx->pc = 0x26feacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2562)));
    // 0x26feb0: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x26feb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26feb4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x26feb8: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26febc: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fec0: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FEC0u;
    SET_GPR_U32(ctx, 31, 0x26FEC8u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FEC0u, 0x26FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEC8u;
label_26fec8:
    // 0x26fec8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x26fecc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26feccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fed0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fed8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26fedc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fee4: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x26fee8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26feec: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26fef0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fef4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fef8: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FEF8u;
    SET_GPR_U32(ctx, 31, 0x26FF00u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FEF8u, 0x26FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF00u;
label_26ff00:
    // 0x26ff00: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26ff04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff08: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
    // 0x26ff0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff10: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x26ff10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x26ff14: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x26ff14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26ff18: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x26ff18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x26ff1cu;
}
