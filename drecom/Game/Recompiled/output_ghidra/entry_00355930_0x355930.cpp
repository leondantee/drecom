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

// Function: entry_00355930
// Address: 0x355930 - 0x35599c
void entry_00355930_0x355930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355930_0x355930");
#endif

    ctx->pc = 0x355930u;

    // 0x355930: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x355930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x355934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355938: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35593c: 0x84630036  lh          $v1, 0x36($v1)
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x355940: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x355940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x355944: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x355944u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355948: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355948u;
    {
        const bool branch_taken_0x355948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355948) {
            ctx->pc = 0x35599Cu;
            return;
        }
    }
    ctx->pc = 0x355950u;
    // 0x355950: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x355950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x355954: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355958: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35595c: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x35595cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x355960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355964: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355968: 0x848300bc  lh          $v1, 0xBC($a0)
    ctx->pc = 0x355968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x35596c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x355970: 0xa48300bc  sh          $v1, 0xBC($a0)
    ctx->pc = 0x355970u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x355974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355978: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35597c: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x35597cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x355980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355984: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355988: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x355988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x35598c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355990: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355994: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355998: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x355998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x35599cu;
}
