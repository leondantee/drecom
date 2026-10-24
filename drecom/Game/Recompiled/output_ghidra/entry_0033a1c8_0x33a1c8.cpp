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

// Function: entry_0033a1c8
// Address: 0x33a1c8 - 0x33a240
void entry_0033a1c8_0x33a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a1c8_0x33a1c8");
#endif

    switch (ctx->pc) {
        case 0x33a20cu: goto label_33a20c;
        case 0x33a224u: goto label_33a224;
        case 0x33a234u: goto label_33a234;
        default: break;
    }

    ctx->pc = 0x33a1c8u;

    // 0x33a1c8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a1cc: 0x8c229a10  lw          $v0, -0x65F0($at)
    ctx->pc = 0x33a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a1d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33a1d4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x33a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a1d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1dc: 0x244750c0  addiu       $a3, $v0, 0x50C0
    ctx->pc = 0x33a1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a1e0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1e4: 0x244950c0  addiu       $t1, $v0, 0x50C0
    ctx->pc = 0x33a1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a1e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33a1ec: 0x244ba280  addiu       $t3, $v0, -0x5D80
    ctx->pc = 0x33a1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x33a1f0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a1f4: 0x244452d0  addiu       $a0, $v0, 0x52D0
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    // 0x33a1f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33a1f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33a1fc: 0x72204628  paddub      $t0, $s1, $zero
    ctx->pc = 0x33a1fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33a200: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x33a200u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33a204: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x33A204u;
    SET_GPR_U32(ctx, 31, 0x33A20Cu);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x33A20Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A20Cu) { return; }
    ctx->pc = 0x33A20Cu;
label_33a20c:
    // 0x33a20c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33A20Cu;
    {
        const bool branch_taken_0x33a20c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x33a20c) {
            ctx->pc = 0x33A240u;
            return;
        }
    }
    ctx->pc = 0x33A214u;
    // 0x33a214: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a218: 0x244427f0  addiu       $a0, $v0, 0x27F0
    ctx->pc = 0x33a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x33a21c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A21Cu;
    SET_GPR_U32(ctx, 31, 0x33A224u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A224u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A224u) { return; }
    ctx->pc = 0x33A224u;
label_33a224:
    // 0x33a224: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a228: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x33a22c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x33A22Cu;
    SET_GPR_U32(ctx, 31, 0x33A234u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x33A234u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A234u) { return; }
    ctx->pc = 0x33A234u;
label_33a234:
    // 0x33a234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a238: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33A238u;
    {
        const bool branch_taken_0x33a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a238) {
            ctx->pc = 0x33A264u;
            return;
        }
    }
    ctx->pc = 0x33A240u;
}
