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

// Function: entry_002d2300
// Address: 0x2d2300 - 0x2d237c
void entry_002d2300_0x2d2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2300_0x2d2300");
#endif

    switch (ctx->pc) {
        case 0x2d2330u: goto label_2d2330;
        default: break;
    }

    ctx->pc = 0x2d2300u;

    // 0x2d2300: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2304: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d2304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d230c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d2310: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d2314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2318: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d2318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d231c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2324: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d2328: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D2328u;
    SET_GPR_U32(ctx, 31, 0x2D2330u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D2328u, 0x2D2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2330u;
label_2d2330:
    // 0x2d2330: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2330u;
    {
        const bool branch_taken_0x2d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2330) {
            ctx->pc = 0x2D237Cu;
            return;
        }
    }
    ctx->pc = 0x2D2338u;
    // 0x2d2338: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d2338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d233c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d2340: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d2340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d2344: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d2344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d2348: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d2348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d234c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2354: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2358: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d235c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2360: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2368: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d236c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2370: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2378: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d237cu;
}
