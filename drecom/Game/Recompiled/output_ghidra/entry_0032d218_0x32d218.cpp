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

// Function: entry_0032d218
// Address: 0x32d218 - 0x32d278
void entry_0032d218_0x32d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d218_0x32d218");
#endif

    ctx->pc = 0x32d218u;

    // 0x32d218: 0x9223290e  lbu         $v1, 0x290E($s1)
    ctx->pc = 0x32d218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10510)));
    // 0x32d21c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d224: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x32D224u;
    {
        const bool branch_taken_0x32d224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d224) {
            ctx->pc = 0x32D3D0u;
            return;
        }
    }
    ctx->pc = 0x32D22Cu;
    // 0x32d22c: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d230: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d234: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d234u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d238: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x32d238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x32d23c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D23Cu;
    {
        const bool branch_taken_0x32d23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d23c) {
            ctx->pc = 0x32D278u;
            return;
        }
    }
    ctx->pc = 0x32D244u;
    // 0x32d244: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d24c: 0x0  nop
    ctx->pc = 0x32d24cu;
    // NOP
    // 0x32d250: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d254: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x32d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x32d258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d25c: 0x0  nop
    ctx->pc = 0x32d25cu;
    // NOP
    // 0x32d260: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d260u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d264: 0x0  nop
    ctx->pc = 0x32d264u;
    // NOP
    // 0x32d268: 0x0  nop
    ctx->pc = 0x32d268u;
    // NOP
    // 0x32d26c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d270: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32D270u;
    {
        const bool branch_taken_0x32d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d270) {
            ctx->pc = 0x32D2B0u;
            return;
        }
    }
    ctx->pc = 0x32D278u;
}
