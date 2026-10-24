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

// Function: entry_0015f21c
// Address: 0x15f21c - 0x15f29c
void entry_0015f21c_0x15f21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f21c_0x15f21c");
#endif

    switch (ctx->pc) {
        case 0x15f264u: goto label_15f264;
        default: break;
    }

    ctx->pc = 0x15f21cu;

    // 0x15f21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f220: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f224: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f228: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f22c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f230: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f234: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f238: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x15f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f23c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f240: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x15f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f244: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x15f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f248: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f248u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f24c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f250: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f258: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f25c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F25Cu;
    SET_GPR_U32(ctx, 31, 0x15F264u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F25Cu, 0x15F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F264u;
label_15f264:
    // 0x15f264: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15f268: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f26c: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x15f270: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15f274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f278: 0x0  nop
    ctx->pc = 0x15f278u;
    // NOP
    // 0x15f27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f280: 0x0  nop
    ctx->pc = 0x15f280u;
    // NOP
    // 0x15f284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15F284u;
    {
        const bool branch_taken_0x15f284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f284) {
            ctx->pc = 0x15F29Cu;
            return;
        }
    }
    ctx->pc = 0x15F28Cu;
    // 0x15f28c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f294: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15F294u;
    {
        const bool branch_taken_0x15f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f294) {
            ctx->pc = 0x15F348u;
            return;
        }
    }
    ctx->pc = 0x15F29Cu;
}
