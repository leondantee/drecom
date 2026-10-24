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

// Function: entry_002cd918
// Address: 0x2cd918 - 0x2cd98c
void entry_002cd918_0x2cd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd918_0x2cd918");
#endif

    ctx->pc = 0x2cd918u;

    // 0x2cd918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd91c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd920: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CD920u;
    {
        const bool branch_taken_0x2cd920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd920) {
            ctx->pc = 0x2CD98Cu;
            return;
        }
    }
    ctx->pc = 0x2CD928u;
    // 0x2cd928: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd930: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd934: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cd938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd93c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd940: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cd940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd948: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2cd948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd94c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd950: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2cd950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd958: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2cd958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd95c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd960: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cd960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cd964: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2cd964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd968: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd96c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd970: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2cd970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cd974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd978: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cd978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd97c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2cd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2cd980: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cd984: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cd984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cd988: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2cd988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x2cd98cu;
}
