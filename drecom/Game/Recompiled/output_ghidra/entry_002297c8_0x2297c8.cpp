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

// Function: entry_002297c8
// Address: 0x2297c8 - 0x2298ac
void entry_002297c8_0x2297c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002297c8_0x2297c8");
#endif

    switch (ctx->pc) {
        case 0x2297e0u: goto label_2297e0;
        case 0x229800u: goto label_229800;
        case 0x229818u: goto label_229818;
        case 0x22985cu: goto label_22985c;
        default: break;
    }

    ctx->pc = 0x2297c8u;

    // 0x2297c8: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2297C8u;
    {
        const bool branch_taken_0x2297c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297c8) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x2297D0u;
    // 0x2297d0: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x2297d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2297d4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2297d8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2297D8u;
    SET_GPR_U32(ctx, 31, 0x2297E0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2297D8u, 0x2297E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297E0u;
label_2297e0:
    // 0x2297e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2297e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2297e4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2297e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2297e8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2297e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2297ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2297ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2297f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2297f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2297f4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2297f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2297f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2297F8u;
    SET_GPR_U32(ctx, 31, 0x229800u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2297F8u, 0x229800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229800u;
label_229800:
    // 0x229800: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x229800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x229804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229808: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x229808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x22980c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x229810: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x229810u;
    SET_GPR_U32(ctx, 31, 0x229818u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x229810u, 0x229818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229818u;
label_229818:
    // 0x229818: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x229818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22981c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229820: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229824: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x229824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22982c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229830: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x229834: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x229838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22983c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229840: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229844: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x229844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x229848: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x229848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22984c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x22984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229850: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x229850u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229854: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229854u;
    SET_GPR_U32(ctx, 31, 0x22985Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229854u, 0x22985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22985Cu;
label_22985c:
    // 0x22985c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x229860: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229864: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x229864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x229868: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x22986c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229870: 0x0  nop
    ctx->pc = 0x229870u;
    // NOP
    // 0x229874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229878: 0x0  nop
    ctx->pc = 0x229878u;
    // NOP
    // 0x22987c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x22987Cu;
    {
        const bool branch_taken_0x22987c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22987c) {
            ctx->pc = 0x2298ACu;
            return;
        }
    }
    ctx->pc = 0x229884u;
    // 0x229884: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22988c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x22988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229890: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229898: 0x0  nop
    ctx->pc = 0x229898u;
    // NOP
    // 0x22989c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22989cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2298a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2298a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298a4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2298a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2298a8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2298a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->pc = 0x2298acu;
}
