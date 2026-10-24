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

// Function: entry_002a7960
// Address: 0x2a7960 - 0x2a7bbc
void entry_002a7960_0x2a7960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7960_0x2a7960");
#endif

    switch (ctx->pc) {
        case 0x2a79b0u: goto label_2a79b0;
        case 0x2a79ccu: goto label_2a79cc;
        case 0x2a79d8u: goto label_2a79d8;
        case 0x2a79e4u: goto label_2a79e4;
        case 0x2a7a9cu: goto label_2a7a9c;
        case 0x2a7ad4u: goto label_2a7ad4;
        case 0x2a7b0cu: goto label_2a7b0c;
        case 0x2a7b44u: goto label_2a7b44;
        case 0x2a7b7cu: goto label_2a7b7c;
        case 0x2a7bb4u: goto label_2a7bb4;
        default: break;
    }

    ctx->pc = 0x2a7960u;

    // 0x2a7960: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7964: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a7964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a7968: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a796c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7970: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7974: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7978: 0x0  nop
    ctx->pc = 0x2a7978u;
    // NOP
    // 0x2a797c: 0x450000e9  bc1f        . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A797Cu;
    {
        const bool branch_taken_0x2a797c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a797c) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7984u;
    // 0x2a7984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7988: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a798c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a798cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7990: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7994: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7998: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a799c: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a79a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a79a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a79a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a79a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a79a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A79A8u;
    SET_GPR_U32(ctx, 31, 0x2A79B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A79A8u, 0x2A79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79B0u;
label_2a79b0:
    // 0x2a79b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a79b4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a79b8: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A79B8u;
    {
        const bool branch_taken_0x2a79b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a79b8) {
            ctx->pc = 0x2A7BBCu;
            return;
        }
    }
    ctx->pc = 0x2A79C0u;
    // 0x2a79c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a79c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79C4u;
    SET_GPR_U32(ctx, 31, 0x2A79CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79C4u, 0x2A79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79CCu;
label_2a79cc:
    // 0x2a79cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a79d0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79D0u;
    SET_GPR_U32(ctx, 31, 0x2A79D8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79D0u, 0x2A79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79D8u;
label_2a79d8:
    // 0x2a79d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a79dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79DCu;
    SET_GPR_U32(ctx, 31, 0x2A79E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79DCu, 0x2A79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79E4u;
label_2a79e4:
    // 0x2a79e4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a79e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a79e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a79ec: 0x0  nop
    ctx->pc = 0x2a79ecu;
    // NOP
    // 0x2a79f0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a79f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a79f4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a79f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a79f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a79fc: 0x0  nop
    ctx->pc = 0x2a79fcu;
    // NOP
    // 0x2a7a00: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a7a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a7a04: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a7a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a0c: 0x0  nop
    ctx->pc = 0x2a7a0cu;
    // NOP
    // 0x2a7a10: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a7a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a7a14: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a7a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a1c: 0x0  nop
    ctx->pc = 0x2a7a1cu;
    // NOP
    // 0x2a7a20: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a7a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a7a24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a2c: 0x0  nop
    ctx->pc = 0x2a7a2cu;
    // NOP
    // 0x2a7a30: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a7a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a7a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a3c: 0x0  nop
    ctx->pc = 0x2a7a3cu;
    // NOP
    // 0x2a7a40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a7a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a7a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a4c: 0x0  nop
    ctx->pc = 0x2a7a4cu;
    // NOP
    // 0x2a7a50: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a7a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a7a54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a5c: 0x0  nop
    ctx->pc = 0x2a7a5cu;
    // NOP
    // 0x2a7a60: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a7a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a7a64: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7a68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7a6c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7a70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7a74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7a78: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7a7c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a7a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a7a80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7a84: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7a88: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7a8c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7a90: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7a94: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7A94u;
    SET_GPR_U32(ctx, 31, 0x2A7A9Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7A94u, 0x2A7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A9Cu;
label_2a7a9c:
    // 0x2a7a9c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7aa4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7aa8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7aac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ab0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ab4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a7ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a7ab8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7abc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7ac0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7ac4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7ac8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7acc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7ACCu;
    SET_GPR_U32(ctx, 31, 0x2A7AD4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7ACCu, 0x2A7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7AD4u;
label_2a7ad4:
    // 0x2a7ad4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7ad8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7adc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ae0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7ae8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7aec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a7aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a7af0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7af4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7af8: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7afc: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b00: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b04: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B04u;
    SET_GPR_U32(ctx, 31, 0x2A7B0Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B04u, 0x2A7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B0Cu;
label_2a7b0c:
    // 0x2a7b0c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7b14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b18: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a7b1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b20: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b24: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a7b28: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b2c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7b30: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7b34: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b38: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B3Cu;
    SET_GPR_U32(ctx, 31, 0x2A7B44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B3Cu, 0x2A7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B44u;
label_2a7b44:
    // 0x2a7b44: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a7b48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b4c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b50: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7b54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b58: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a7b60: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b64: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7b68: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7b6c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b70: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b74: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B74u;
    SET_GPR_U32(ctx, 31, 0x2A7B7Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B74u, 0x2A7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B7Cu;
label_2a7b7c:
    // 0x2a7b7c: 0x3c103c23  lui         $s0, 0x3C23
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b80: 0x3603d70a  ori         $v1, $s0, 0xD70A
    ctx->pc = 0x2a7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55050);
    // 0x2a7b84: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a7b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b88: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2a7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7b8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a7b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b90: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b94: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a7b98: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b9c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7ba0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7ba4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7ba8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7bac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7BACu;
    SET_GPR_U32(ctx, 31, 0x2A7BB4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7BACu, 0x2A7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BB4u;
label_2a7bb4:
    // 0x2a7bb4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2A7BB4u;
    {
        const bool branch_taken_0x2a7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7bb4) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7BBCu;
}
