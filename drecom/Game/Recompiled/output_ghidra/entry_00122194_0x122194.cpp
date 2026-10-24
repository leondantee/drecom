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

// Function: entry_00122194
// Address: 0x122194 - 0x12223c
void entry_00122194_0x122194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122194_0x122194");
#endif

    switch (ctx->pc) {
        case 0x1221a8u: goto label_1221a8;
        case 0x1221d4u: goto label_1221d4;
        default: break;
    }

    ctx->pc = 0x122194u;

    // 0x122194: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122198: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x122198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12219c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12219cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1221a0: 0xc048090  jal         func_120240
    ctx->pc = 0x1221A0u;
    SET_GPR_U32(ctx, 31, 0x1221A8u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x1221A0u, 0x1221A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221A8u;
label_1221a8:
    // 0x1221a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1221a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1221ac: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1221acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1221b0: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x1221b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x1221b4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1221b8: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x1221b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1221bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1221bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1221c0: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1221c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x1221c4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1221c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1221c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1221c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1221cc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1221CCu;
    SET_GPR_U32(ctx, 31, 0x1221D4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1221CCu, 0x1221D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221D4u;
label_1221d4:
    // 0x1221d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1221d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1221d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1221d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1221dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1221dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1221e0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1221e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1221e4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1221e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1221e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1221E8u;
    {
        const bool branch_taken_0x1221e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1221e8) {
            ctx->pc = 0x12223Cu;
            return;
        }
    }
    ctx->pc = 0x1221F0u;
    // 0x1221f0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1221f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1221f4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1221f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1221f8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1221fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1221fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x122200: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x122200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x122204: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122208: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12220c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12220cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122210: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x122210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x122214: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122218: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12221c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122220: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x122220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122224: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122228: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x122228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12222c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122234: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x122234u;
    {
        const bool branch_taken_0x122234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122234) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12223Cu;
}
