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

// Function: entry_0014aad4
// Address: 0x14aad4 - 0x14ab20
void entry_0014aad4_0x14aad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aad4_0x14aad4");
#endif

    ctx->pc = 0x14aad4u;

    // 0x14aad4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aadc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14aae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aae4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14aae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14aaec: 0xc4601b50  lwc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aaf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14aaf0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14aaf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aaf8: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14aaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14aafc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x14ab00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab04: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x14ab04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
    // 0x14ab08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ab0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ab10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ab14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ab18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AB18u;
    {
        const bool branch_taken_0x14ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab18) {
            ctx->pc = 0x14AB44u;
            return;
        }
    }
    ctx->pc = 0x14AB20u;
}
