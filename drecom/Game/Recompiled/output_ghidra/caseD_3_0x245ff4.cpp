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

// Function: caseD_3
// Address: 0x245ff4 - 0x2460e8
void caseD_3_0x245ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x245ff4");
#endif

    switch (ctx->pc) {
        case 0x246084u: goto label_246084;
        case 0x2460acu: goto label_2460ac;
        default: break;
    }

    ctx->pc = 0x245ff4u;

    // 0x245ff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245ff8: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x245ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x245ffc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x246000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246004: 0x0  nop
    ctx->pc = 0x246004u;
    // NOP
    // 0x246008: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x246008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x24600c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x24600cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x246010: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246014: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x246014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246018: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x246018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x24601c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x24601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x246020: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x246020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x246024: 0x3c0541cc  lui         $a1, 0x41CC
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16844 << 16));
    // 0x246028: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246028u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24602c: 0x0  nop
    ctx->pc = 0x24602cu;
    // NOP
    // 0x246030: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x246030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x246034: 0x3c02c30e  lui         $v0, 0xC30E
    ctx->pc = 0x246034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49934 << 16));
    // 0x246038: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x246038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x24603c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24603cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246040: 0x0  nop
    ctx->pc = 0x246040u;
    // NOP
    // 0x246044: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x246044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x246048: 0x3c0343f7  lui         $v1, 0x43F7
    ctx->pc = 0x246048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17399 << 16));
    // 0x24604c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x246050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246054: 0x0  nop
    ctx->pc = 0x246054u;
    // NOP
    // 0x246058: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x246058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24605c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246064: 0x0  nop
    ctx->pc = 0x246064u;
    // NOP
    // 0x246068: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x246068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24606c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x246070: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x246070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x246074: 0x2445dca0  addiu       $a1, $v0, -0x2360
    ctx->pc = 0x246074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958240));
    // 0x246078: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24607c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24607Cu;
    SET_GPR_U32(ctx, 31, 0x246084u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x246084u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x246084u) { return; }
    ctx->pc = 0x246084u;
label_246084:
    // 0x246084: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24608c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x24608cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x246090: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x246094: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x246094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x246098: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x246098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x24609c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x24609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2460a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2460a4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2460A4u;
    SET_GPR_U32(ctx, 31, 0x2460ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2460A4u, 0x2460ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460ACu;
label_2460ac:
    // 0x2460ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2460acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2460b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2460b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2460b4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2460b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2460b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2460b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2460bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2460bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2460c0: 0x0  nop
    ctx->pc = 0x2460c0u;
    // NOP
    // 0x2460c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2460C4u;
    {
        const bool branch_taken_0x2460c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2460c4) {
            ctx->pc = 0x2460E8u;
            return;
        }
    }
    ctx->pc = 0x2460CCu;
    // 0x2460cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2460ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2460d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2460d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2460d4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2460d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2460d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2460d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2460dc: 0x0  nop
    ctx->pc = 0x2460dcu;
    // NOP
    // 0x2460e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2460e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2460e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2460e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2460e8u;
}
