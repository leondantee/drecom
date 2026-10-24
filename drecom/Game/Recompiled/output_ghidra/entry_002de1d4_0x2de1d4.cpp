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

// Function: entry_002de1d4
// Address: 0x2de1d4 - 0x2de27c
void entry_002de1d4_0x2de1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de1d4_0x2de1d4");
#endif

    switch (ctx->pc) {
        case 0x2de1f0u: goto label_2de1f0;
        case 0x2de214u: goto label_2de214;
        default: break;
    }

    ctx->pc = 0x2de1d4u;

    // 0x2de1d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de1d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de1dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de1e0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2de1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2de1e4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2de1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2de1e8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DE1E8u;
    SET_GPR_U32(ctx, 31, 0x2DE1F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE1E8u, 0x2DE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1F0u;
label_2de1f0:
    // 0x2de1f0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2de1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de1f4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2de1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de1f8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2de1f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2de1fc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2de1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de200: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2de200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de204: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2de204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2de208: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2de208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2de20c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2DE20Cu;
    SET_GPR_U32(ctx, 31, 0x2DE214u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DE20Cu, 0x2DE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE214u;
label_2de214:
    // 0x2de214: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2de214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2de218: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2de218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de21c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2de21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2de220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de224: 0x0  nop
    ctx->pc = 0x2de224u;
    // NOP
    // 0x2de228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de22c: 0x0  nop
    ctx->pc = 0x2de22cu;
    // NOP
    // 0x2de230: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DE230u;
    {
        const bool branch_taken_0x2de230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de230) {
            ctx->pc = 0x2DE2C0u;
            return;
        }
    }
    ctx->pc = 0x2DE238u;
    // 0x2de238: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de23c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2de23cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2de240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de244: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2de244u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2de248: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de24c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2de250: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2de250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2de254: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2de254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2de258: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2de258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2de25c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE25Cu;
    {
        const bool branch_taken_0x2de25c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de25c) {
            ctx->pc = 0x2DE27Cu;
            return;
        }
    }
    ctx->pc = 0x2DE264u;
    // 0x2de264: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de268: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de26c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de270: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de274: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2DE274u;
    {
        const bool branch_taken_0x2de274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de274) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DE27Cu;
}
