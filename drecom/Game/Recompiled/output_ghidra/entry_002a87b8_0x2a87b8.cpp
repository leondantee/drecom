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

// Function: entry_002a87b8
// Address: 0x2a87b8 - 0x2a8868
void entry_002a87b8_0x2a87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a87b8_0x2a87b8");
#endif

    switch (ctx->pc) {
        case 0x2a8828u: goto label_2a8828;
        default: break;
    }

    ctx->pc = 0x2a87b8u;

    // 0x2a87b8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2a87b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2a87bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a87c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2a87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a87c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a87c8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A87C8u;
    {
        const bool branch_taken_0x2a87c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a87c8) {
            ctx->pc = 0x2A8868u;
            return;
        }
    }
    ctx->pc = 0x2A87D0u;
    // 0x2a87d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87d4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87d8: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a87d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a87dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a87e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a87e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87e8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87ec: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a87ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a87f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a87f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2a87f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a87f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87fc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8800: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8808: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a8808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a880c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8814: 0x0  nop
    ctx->pc = 0x2a8814u;
    // NOP
    // 0x2a8818: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a881c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8820: 0xc067588  jal         func_19D620
    ctx->pc = 0x2A8820u;
    SET_GPR_U32(ctx, 31, 0x2A8828u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2A8820u, 0x2A8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8828u;
label_2a8828:
    // 0x2a8828: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a882c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2a882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8830: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8838: 0x0  nop
    ctx->pc = 0x2a8838u;
    // NOP
    // 0x2a883c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A883Cu;
    {
        const bool branch_taken_0x2a883c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a883c) {
            ctx->pc = 0x2A8868u;
            return;
        }
    }
    ctx->pc = 0x2A8844u;
    // 0x2a8844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8848: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x2a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2a884c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8850: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a8850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a8854: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2a8854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2a8858: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a885c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2a885cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2a8860: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8864: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a8864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x2a8868u;
}
