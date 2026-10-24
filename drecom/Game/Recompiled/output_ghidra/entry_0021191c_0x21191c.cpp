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

// Function: entry_0021191c
// Address: 0x21191c - 0x211974
void entry_0021191c_0x21191c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021191c_0x21191c");
#endif

    ctx->pc = 0x21191cu;

    // 0x21191c: 0x8fb70528  lw          $s7, 0x528($sp)
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211920: 0x86e71278  lh          $a3, 0x1278($s7)
    ctx->pc = 0x211920u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4728)));
    // 0x211924: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x211924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x211928: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x211928u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x21192c: 0x29010353  slti        $at, $t0, 0x353
    ctx->pc = 0x21192cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)851) ? 1 : 0);
    // 0x211930: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x211930u;
    {
        const bool branch_taken_0x211930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x211930) {
            ctx->pc = 0x211974u;
            return;
        }
    }
    ctx->pc = 0x211938u;
    // 0x211938: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x211938u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21193c: 0x85691278  lh          $t1, 0x1278($t3)
    ctx->pc = 0x21193cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4728)));
    // 0x211940: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x211940u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x211944: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x211944u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x211948: 0x29410357  slti        $at, $t2, 0x357
    ctx->pc = 0x211948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)855) ? 1 : 0);
    // 0x21194c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21194Cu;
    {
        const bool branch_taken_0x21194c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21194c) {
            ctx->pc = 0x211974u;
            return;
        }
    }
    ctx->pc = 0x211954u;
    // 0x211954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211958: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x211958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x21195c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x211960: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x211960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x211964: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211968: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x211968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x21196c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21196Cu;
    {
        const bool branch_taken_0x21196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21196c) {
            ctx->pc = 0x211990u;
            return;
        }
    }
    ctx->pc = 0x211974u;
}
