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

// Function: entry_0035e2e0
// Address: 0x35e2e0 - 0x35e344
void entry_0035e2e0_0x35e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e2e0_0x35e2e0");
#endif

    switch (ctx->pc) {
        case 0x35e2ecu: goto label_35e2ec;
        case 0x35e324u: goto label_35e324;
        case 0x35e33cu: goto label_35e33c;
        default: break;
    }

    ctx->pc = 0x35e2e0u;

    // 0x35e2e0: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x35e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x35e2e4: 0xc0428d8  jal         func_10A360
    ctx->pc = 0x35E2E4u;
    SET_GPR_U32(ctx, 31, 0x35E2ECu);
    ctx->pc = 0x10A360u;
    {
        ctx->pc = 0x35E2ECu;
        ps2_stubs::sceMpegIsEnd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E2ECu) { return; }
    ctx->pc = 0x35E2ECu;
label_35e2ec:
    // 0x35e2ec: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x35E2ECu;
    {
        const bool branch_taken_0x35e2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e2ec) {
            ctx->pc = 0x35E3FCu;
            return;
        }
    }
    ctx->pc = 0x35E2F4u;
    // 0x35e2f4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x35e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35e2f8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x35e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35e2fc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x35e2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e300: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e304: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x35e304u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e308: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e30c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x35e30cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e310: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x35e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x35e314: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35e318: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x35e318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35e31c: 0xc042892  jal         func_10A248
    ctx->pc = 0x35E31Cu;
    SET_GPR_U32(ctx, 31, 0x35E324u);
    ctx->pc = 0x10A248u;
    {
        ctx->pc = 0x35E324u;
        ps2_stubs::sceMpegGetPicture(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E324u) { return; }
    ctx->pc = 0x35E324u;
label_35e324:
    // 0x35e324: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E324u;
    {
        const bool branch_taken_0x35e324 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35e324) {
            ctx->pc = 0x35E344u;
            return;
        }
    }
    ctx->pc = 0x35E32Cu;
    // 0x35e32c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35e330: 0x24442ab0  addiu       $a0, $v0, 0x2AB0
    ctx->pc = 0x35e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10928));
    // 0x35e334: 0xc046760  jal         func_119D80
    ctx->pc = 0x35E334u;
    SET_GPR_U32(ctx, 31, 0x35E33Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x35E33Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E33Cu) { return; }
    ctx->pc = 0x35E33Cu;
label_35e33c:
    // 0x35e33c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x35E33Cu;
    {
        const bool branch_taken_0x35e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e33c) {
            ctx->pc = 0x35E3FCu;
            return;
        }
    }
    ctx->pc = 0x35E344u;
}
