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

// Function: entry_002cdce8
// Address: 0x2cdce8 - 0x2cdd5c
void entry_002cdce8_0x2cdce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdce8_0x2cdce8");
#endif

    ctx->pc = 0x2cdce8u;

    // 0x2cdce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcec: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cdcf0: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CDCF0u;
    {
        const bool branch_taken_0x2cdcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcf0) {
            ctx->pc = 0x2CDD5Cu;
            return;
        }
    }
    ctx->pc = 0x2CDCF8u;
    // 0x2cdcf8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cdcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cdcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdd00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd04: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cdd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cdd08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdd0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cdd10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cdd14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd18: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2cdd18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2cdd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2cdd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cdd30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cdd34: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2cdd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cdd38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdd40: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2cdd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cdd44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd48: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cdd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdd4c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2cdd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2cdd50: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cdd54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cdd58: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2cdd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x2cdd5cu;
}
