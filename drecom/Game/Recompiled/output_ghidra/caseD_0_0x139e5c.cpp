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

// Function: caseD_0
// Address: 0x139e5c - 0x139ee0
void caseD_0_0x139e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x139e5c");
#endif

    switch (ctx->pc) {
        case 0x139e8cu: goto label_139e8c;
        case 0x139ea0u: goto label_139ea0;
        case 0x139ebcu: goto label_139ebc;
        default: break;
    }

    ctx->pc = 0x139e5cu;

    // 0x139e5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139e64: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x139e68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x139e6c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x139e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x139e74: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139e74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x139e78: 0x240605af  addiu       $a2, $zero, 0x5AF
    ctx->pc = 0x139e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
    // 0x139e7c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x139e80: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139e84: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139E84u;
    SET_GPR_U32(ctx, 31, 0x139E8Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139E84u, 0x139E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E8Cu;
label_139e8c:
    // 0x139e8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139e90: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139e94: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x139e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x139e98: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x139E98u;
    SET_GPR_U32(ctx, 31, 0x139EA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x139E98u, 0x139EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EA0u;
label_139ea0:
    // 0x139ea0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x139ea4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x139ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x139ea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x139ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139eac: 0x0  nop
    ctx->pc = 0x139eacu;
    // NOP
    // 0x139eb0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x139eb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139eb4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x139EB4u;
    SET_GPR_U32(ctx, 31, 0x139EBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x139EB4u, 0x139EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EBCu;
label_139ebc:
    // 0x139ebc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ec0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x139ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x139ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ec8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ecc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x139eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x139ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ed4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139edc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x139ee0u;
}
