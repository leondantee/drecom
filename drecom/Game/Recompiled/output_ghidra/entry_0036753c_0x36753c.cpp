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

// Function: entry_0036753c
// Address: 0x36753c - 0x367598
void entry_0036753c_0x36753c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036753c_0x36753c");
#endif

    switch (ctx->pc) {
        case 0x36755cu: goto label_36755c;
        case 0x367580u: goto label_367580;
        default: break;
    }

    ctx->pc = 0x36753cu;

    // 0x36753c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367540: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367544: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367548: 0x24060513  addiu       $a2, $zero, 0x513
    ctx->pc = 0x367548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x36754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367554u;
    SET_GPR_U32(ctx, 31, 0x36755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367554u, 0x36755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36755Cu;
label_36755c:
    // 0x36755c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367560: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367564: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x367564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x367568: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36756c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367570: 0x0  nop
    ctx->pc = 0x367570u;
    // NOP
    // 0x367574: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x367574u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x367578: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x367578u;
    SET_GPR_U32(ctx, 31, 0x367580u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367578u, 0x367580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367580u;
label_367580:
    // 0x367580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367584: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367588: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36758c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36758cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367594: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x367598u;
}
