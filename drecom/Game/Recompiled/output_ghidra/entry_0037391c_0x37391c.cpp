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

// Function: entry_0037391c
// Address: 0x37391c - 0x3739d8
void entry_0037391c_0x37391c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037391c_0x37391c");
#endif

    switch (ctx->pc) {
        case 0x373938u: goto label_373938;
        default: break;
    }

    ctx->pc = 0x37391cu;

    // 0x37391c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x37391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373920: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x373920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373924: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x373924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373928: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37392c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x37392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373930: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x373930u;
    SET_GPR_U32(ctx, 31, 0x373938u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x373930u, 0x373938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373938u;
label_373938:
    // 0x373938: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x373938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x37393c: 0x3c04c743  lui         $a0, 0xC743
    ctx->pc = 0x37393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51011 << 16));
    // 0x373940: 0x34825000  ori         $v0, $a0, 0x5000
    ctx->pc = 0x373940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x373944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x373944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373948: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x373948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37394c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x37394cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373950: 0x0  nop
    ctx->pc = 0x373950u;
    // NOP
    // 0x373954: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x373954u;
    {
        const bool branch_taken_0x373954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x373954) {
            ctx->pc = 0x373A58u;
            return;
        }
    }
    ctx->pc = 0x37395Cu;
    // 0x37395c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x37395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373960: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x373960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x373964: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x373964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373968: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x373968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37396c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37396cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373970: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x373970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x373974: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x373974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373978: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x373978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37397c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x373980: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x373980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373984: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x373984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373988: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x373988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37398c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x37398cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373990: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x373990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x373994: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x373994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x373998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37399c: 0x0  nop
    ctx->pc = 0x37399cu;
    // NOP
    // 0x3739a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3739a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3739a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3739a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3739a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3739a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3739ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3739acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3739b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739b4: 0x0  nop
    ctx->pc = 0x3739b4u;
    // NOP
    // 0x3739b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3739b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3739bc: 0x0  nop
    ctx->pc = 0x3739bcu;
    // NOP
    // 0x3739c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3739C0u;
    {
        const bool branch_taken_0x3739c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3739c0) {
            ctx->pc = 0x3739D8u;
            return;
        }
    }
    ctx->pc = 0x3739C8u;
    // 0x3739c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3739c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x3739cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3739ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739d0: 0x0  nop
    ctx->pc = 0x3739d0u;
    // NOP
    // 0x3739d4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3739d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x3739d8u;
}
