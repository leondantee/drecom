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

// Function: entry_0019efdc
// Address: 0x19efdc - 0x19eff0
void entry_0019efdc_0x19efdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019efdc_0x19efdc");
#endif

    ctx->pc = 0x19efdcu;

    // 0x19efdc: 0x138e3c  dsll32      $s1, $s3, 24
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 24));
    // 0x19efe0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19efe0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19efe4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19efe8: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19efec: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19efecu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    ctx->pc = 0x19eff0u;
}
