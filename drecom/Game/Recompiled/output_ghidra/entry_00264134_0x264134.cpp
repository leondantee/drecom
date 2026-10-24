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

// Function: entry_00264134
// Address: 0x264134 - 0x26415c
void entry_00264134_0x264134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264134_0x264134");
#endif

    ctx->pc = 0x264134u;

    // 0x264134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26413c: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x264140: 0x2442107c  addiu       $v0, $v0, 0x107C
    ctx->pc = 0x264140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
    // 0x264144: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x264144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264148: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26414c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x26414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264150: 0x9062107a  lbu         $v0, 0x107A($v1)
    ctx->pc = 0x264150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4218)));
    // 0x264154: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x264158: 0xa062107a  sb          $v0, 0x107A($v1)
    ctx->pc = 0x264158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4218), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26415cu;
}
