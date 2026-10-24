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

// Function: entry_003719b8
// Address: 0x3719b8 - 0x371a48
void entry_003719b8_0x3719b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003719b8_0x3719b8");
#endif

    switch (ctx->pc) {
        case 0x3719ccu: goto label_3719cc;
        case 0x3719d8u: goto label_3719d8;
        default: break;
    }

    ctx->pc = 0x3719b8u;

    // 0x3719b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3719b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3719bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3719c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x3719C4u;
    SET_GPR_U32(ctx, 31, 0x3719CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x3719C4u, 0x3719CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719CCu;
label_3719cc:
    // 0x3719cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3719D0u;
    SET_GPR_U32(ctx, 31, 0x3719D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3719D0u, 0x3719D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719D8u;
label_3719d8:
    // 0x3719d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3719dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3719e0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3719E0u;
    {
        const bool branch_taken_0x3719e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3719e0) {
            ctx->pc = 0x371AC8u;
            return;
        }
    }
    ctx->pc = 0x3719E8u;
    // 0x3719e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3719e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3719f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3719f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3719f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3719fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x371a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x371a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a10: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x371a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a18: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x371a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x371a1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x371a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x371a20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a24: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x371a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x371a28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a2c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x371a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a34: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x371a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x371a38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x371a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x371A40u;
    {
        const bool branch_taken_0x371a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371a40) {
            ctx->pc = 0x371AC8u;
            return;
        }
    }
    ctx->pc = 0x371A48u;
}
