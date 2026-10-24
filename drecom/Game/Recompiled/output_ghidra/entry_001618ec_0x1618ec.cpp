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

// Function: entry_001618ec
// Address: 0x1618ec - 0x161944
void entry_001618ec_0x1618ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001618ec_0x1618ec");
#endif

    switch (ctx->pc) {
        case 0x161930u: goto label_161930;
        default: break;
    }

    ctx->pc = 0x1618ecu;

    // 0x1618ec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1618ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618f0: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1618f4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1618f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1618f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1618f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618fc: 0x0  nop
    ctx->pc = 0x1618fcu;
    // NOP
    // 0x161900: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161904: 0x0  nop
    ctx->pc = 0x161904u;
    // NOP
    // 0x161908: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x161908u;
    {
        const bool branch_taken_0x161908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161908) {
            ctx->pc = 0x161944u;
            return;
        }
    }
    ctx->pc = 0x161910u;
    // 0x161910: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x161910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161914: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x161918: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16191c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16191cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161920: 0x0  nop
    ctx->pc = 0x161920u;
    // NOP
    // 0x161924: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161928: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x161928u;
    SET_GPR_U32(ctx, 31, 0x161930u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x161928u, 0x161930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161930u;
label_161930:
    // 0x161930: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161934: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x161938: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x16193c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x16193Cu;
    {
        const bool branch_taken_0x16193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16193c) {
            ctx->pc = 0x161AA0u;
            return;
        }
    }
    ctx->pc = 0x161944u;
}
