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

// Function: entry_00376650
// Address: 0x376650 - 0x3766a0
void entry_00376650_0x376650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376650_0x376650");
#endif

    switch (ctx->pc) {
        case 0x376674u: goto label_376674;
        default: break;
    }

    ctx->pc = 0x376650u;

    // 0x376650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376654: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x376654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x376658: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x376658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x37665c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376660: 0x0  nop
    ctx->pc = 0x376660u;
    // NOP
    // 0x376664: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x376664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x376668: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x376668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x37666c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x37666Cu;
    SET_GPR_U32(ctx, 31, 0x376674u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x37666Cu, 0x376674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376674u;
label_376674:
    // 0x376674: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x376674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x376678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37667c: 0x0  nop
    ctx->pc = 0x37667cu;
    // NOP
    // 0x376680: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x376680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x376684: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x376684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x376688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37668c: 0x0  nop
    ctx->pc = 0x37668cu;
    // NOP
    // 0x376690: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x376690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x376694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376698: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x37669c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x37669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x3766a0u;
}
