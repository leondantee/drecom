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

// Function: entry_0029e400
// Address: 0x29e400 - 0x29e488
void entry_0029e400_0x29e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e400_0x29e400");
#endif

    ctx->pc = 0x29e400u;

    // 0x29e400: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e404: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e408: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e40c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e410: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e414: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e418: 0x0  nop
    ctx->pc = 0x29e418u;
    // NOP
    // 0x29e41c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x29E41Cu;
    {
        const bool branch_taken_0x29e41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e41c) {
            ctx->pc = 0x29E488u;
            return;
        }
    }
    ctx->pc = 0x29E424u;
    // 0x29e424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e428: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e42c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e430: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29E430u;
    {
        const bool branch_taken_0x29e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e430) {
            ctx->pc = 0x29E488u;
            return;
        }
    }
    ctx->pc = 0x29E438u;
    // 0x29e438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e43c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e440: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x29e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e44c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e450: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E450u;
    {
        const bool branch_taken_0x29e450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e450) {
            ctx->pc = 0x29E488u;
            return;
        }
    }
    ctx->pc = 0x29E458u;
    // 0x29e458: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e45c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e460: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e464: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29e468: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e46c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e474: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e47c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e484: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e488u;
}
