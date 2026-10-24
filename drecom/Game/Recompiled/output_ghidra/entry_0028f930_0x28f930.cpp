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

// Function: entry_0028f930
// Address: 0x28f930 - 0x28f94c
void entry_0028f930_0x28f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f930_0x28f930");
#endif

    ctx->pc = 0x28f930u;

    // 0x28f930: 0x133042  srl         $a2, $s3, 1
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x28f934: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28f938: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28f93c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28f93cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f940: 0x0  nop
    ctx->pc = 0x28f940u;
    // NOP
    // 0x28f944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f948: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28f94cu;
}
