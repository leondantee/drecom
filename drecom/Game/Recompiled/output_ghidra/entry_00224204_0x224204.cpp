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

// Function: entry_00224204
// Address: 0x224204 - 0x224278
void entry_00224204_0x224204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224204_0x224204");
#endif

    ctx->pc = 0x224204u;

    // 0x224204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224208: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x224208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22420c: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x22420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224210: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x224214: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x224214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x224218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22421c: 0x0  nop
    ctx->pc = 0x22421cu;
    // NOP
    // 0x224220: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224224: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x224224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x224228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22422c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224230: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x224230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224234: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x224234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x224238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22423c: 0x0  nop
    ctx->pc = 0x22423cu;
    // NOP
    // 0x224240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224244: 0x0  nop
    ctx->pc = 0x224244u;
    // NOP
    // 0x224248: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x224248u;
    {
        const bool branch_taken_0x224248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224248) {
            ctx->pc = 0x224278u;
            return;
        }
    }
    ctx->pc = 0x224250u;
    // 0x224250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224254: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224258: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x224258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22425c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x224260: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x224260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x224264: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x224264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x224268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22426c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224274: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x224274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    ctx->pc = 0x224278u;
}
