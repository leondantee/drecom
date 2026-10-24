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

// Function: entry_0014641c
// Address: 0x14641c - 0x1464a4
void entry_0014641c_0x14641c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014641c_0x14641c");
#endif

    ctx->pc = 0x14641cu;

    // 0x14641c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146420: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x146420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146424: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x146428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14642c: 0x0  nop
    ctx->pc = 0x14642cu;
    // NOP
    // 0x146430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146434: 0x0  nop
    ctx->pc = 0x146434u;
    // NOP
    // 0x146438: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x146438u;
    {
        const bool branch_taken_0x146438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146438) {
            ctx->pc = 0x1464A4u;
            return;
        }
    }
    ctx->pc = 0x146440u;
    // 0x146440: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146444: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x146448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14644c: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x14644cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x146450: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146454: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x146458: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x146458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x14645c: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14645Cu;
    {
        const bool branch_taken_0x14645c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14645c) {
            ctx->pc = 0x1464ACu;
            return;
        }
    }
    ctx->pc = 0x146464u;
    // 0x146464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x146464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146468: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14646c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14646cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x146470: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146474: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x146474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x146478: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14647c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14647cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146480: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146484: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x146484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146488: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14648c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14648cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x146490: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x146494: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146498: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x146498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14649c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14649Cu;
    {
        const bool branch_taken_0x14649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14649c) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x1464A4u;
}
