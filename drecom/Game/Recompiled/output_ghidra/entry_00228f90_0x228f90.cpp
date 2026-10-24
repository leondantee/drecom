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

// Function: entry_00228f90
// Address: 0x228f90 - 0x229060
void entry_00228f90_0x228f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228f90_0x228f90");
#endif

    switch (ctx->pc) {
        case 0x228fa8u: goto label_228fa8;
        case 0x228fc8u: goto label_228fc8;
        case 0x228fe0u: goto label_228fe0;
        case 0x229010u: goto label_229010;
        default: break;
    }

    ctx->pc = 0x228f90u;

    // 0x228f90: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
    ctx->pc = 0x228F90u;
    {
        const bool branch_taken_0x228f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f90) {
            ctx->pc = 0x229204u;
            return;
        }
    }
    ctx->pc = 0x228F98u;
    // 0x228f98: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x228f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x228f9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x228fa0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x228FA0u;
    SET_GPR_U32(ctx, 31, 0x228FA8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x228FA0u, 0x228FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FA8u;
label_228fa8:
    // 0x228fa8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x228fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x228fac: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x228fb0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x228fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228fb8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x228fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228fbc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x228fbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228fc0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x228FC0u;
    SET_GPR_U32(ctx, 31, 0x228FC8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x228FC0u, 0x228FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FC8u;
label_228fc8:
    // 0x228fc8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x228fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x228fcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228fd0: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x228fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x228fd4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228fd8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x228FD8u, 0x228FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FE0u;
label_228fe0:
    // 0x228fe0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x228fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x228fe4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228fe8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228fec: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x228fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ff0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ff8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x228ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x228ffc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x228ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229000: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x229000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229004: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x229004u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229008: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229008u;
    SET_GPR_U32(ctx, 31, 0x229010u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229008u, 0x229010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229010u;
label_229010:
    // 0x229010: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x229010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x229014: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229018: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x22901c: 0x3462b8c2  ori         $v0, $v1, 0xB8C2
    ctx->pc = 0x22901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x229020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229024: 0x0  nop
    ctx->pc = 0x229024u;
    // NOP
    // 0x229028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22902c: 0x0  nop
    ctx->pc = 0x22902cu;
    // NOP
    // 0x229030: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229030u;
    {
        const bool branch_taken_0x229030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229030) {
            ctx->pc = 0x229060u;
            return;
        }
    }
    ctx->pc = 0x229038u;
    // 0x229038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22903c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229040: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229044: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22904c: 0x0  nop
    ctx->pc = 0x22904cu;
    // NOP
    // 0x229050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229054: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229058: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22905c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x229060u;
}
