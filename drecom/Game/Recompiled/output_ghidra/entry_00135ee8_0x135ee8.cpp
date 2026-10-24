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

// Function: entry_00135ee8
// Address: 0x135ee8 - 0x135f24
void entry_00135ee8_0x135ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ee8_0x135ee8");
#endif

    switch (ctx->pc) {
        case 0x135f10u: goto label_135f10;
        default: break;
    }

    ctx->pc = 0x135ee8u;

    // 0x135ee8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x135ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135eec: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135ef0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135ef4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135efc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135f00: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135f04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135f04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135f08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135F08u;
    SET_GPR_U32(ctx, 31, 0x135F10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135F08u, 0x135F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F10u;
label_135f10:
    // 0x135f10: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f14: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135f18: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135f1c: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135f20: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x135f24u;
}
