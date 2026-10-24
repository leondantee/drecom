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

// Function: entry_0021d628
// Address: 0x21d628 - 0x21d6a4
void entry_0021d628_0x21d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d628_0x21d628");
#endif

    switch (ctx->pc) {
        case 0x21d678u: goto label_21d678;
        default: break;
    }

    ctx->pc = 0x21d628u;

    // 0x21d628: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x21d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21d62c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21d62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21d630: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21d634: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d638: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21d63c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x21d63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x21d640: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21d644: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x21d644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x21d648: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x21d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
    // 0x21d64c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x21d64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x21d650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d654: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21d658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d65c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d660: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d664: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d668: 0x244710e0  addiu       $a3, $v0, 0x10E0
    ctx->pc = 0x21d668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d66c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d670: 0xc08741c  jal         func_21D070
    ctx->pc = 0x21D670u;
    SET_GPR_U32(ctx, 31, 0x21D678u);
    ctx->pc = 0x21D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D070u, 0x21D670u, 0x21D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D678u;
label_21d678:
    // 0x21d678: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x21d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x21d67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d680: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x21d684: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d68c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x21d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x21d690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21d694: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21d694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21d698: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x21d698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d69c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x21d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21d6a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x21d6a4u;
}
