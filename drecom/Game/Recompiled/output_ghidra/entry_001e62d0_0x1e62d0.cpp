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

// Function: entry_001e62d0
// Address: 0x1e62d0 - 0x1e635c
void entry_001e62d0_0x1e62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e62d0_0x1e62d0");
#endif

    ctx->pc = 0x1e62d0u;

    // 0x1e62d0: 0x8fa70340  lw          $a3, 0x340($sp)
    ctx->pc = 0x1e62d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1e62d4: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x1e62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e62d8: 0xafa40340  sw          $a0, 0x340($sp)
    ctx->pc = 0x1e62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 4));
    // 0x1e62dc: 0x1480fea1  bnez        $a0, . + 4 + (-0x15F << 2)
    ctx->pc = 0x1E62DCu;
    {
        const bool branch_taken_0x1e62dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e62dc) {
            ctx->pc = 0x1E5D64u;
            return;
        }
    }
    ctx->pc = 0x1E62E4u;
    // 0x1e62e4: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E62E4u;
    {
        const bool branch_taken_0x1e62e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62e4) {
            ctx->pc = 0x1E635Cu;
            return;
        }
    }
    ctx->pc = 0x1E62ECu;
    // 0x1e62ec: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e62f0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e62f4: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1e62f8: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e62fc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1e62fcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1e6300: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6304: 0x2441825  or          $v1, $s2, $a0
    ctx->pc = 0x1e6304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1e6308: 0x8fb40348  lw          $s4, 0x348($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e630c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e630cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e6310: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6314: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e6314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e6318: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e6318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e631c: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e6320: 0x26a40006  addiu       $a0, $s5, 0x6
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x1e6324: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e6324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e6328: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x1e6328u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e632c: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x1e632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1e6330: 0xac96000c  sw          $s6, 0xC($a0)
    ctx->pc = 0x1e6330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 22));
    // 0x1e6334: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1e6338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e6338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e633c: 0x34728000  ori         $s2, $v1, 0x8000
    ctx->pc = 0x1e633cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e6340: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e6344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e6344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6348: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1e6348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1e634c: 0x8fa30368  lw          $v1, 0x368($sp)
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x1e6350: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e6350u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e6354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6354u;
    {
        const bool branch_taken_0x1e6354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6354) {
            ctx->pc = 0x1E6378u;
            return;
        }
    }
    ctx->pc = 0x1E635Cu;
}
