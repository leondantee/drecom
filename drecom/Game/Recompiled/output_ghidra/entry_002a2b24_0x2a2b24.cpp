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

// Function: entry_002a2b24
// Address: 0x2a2b24 - 0x2a2b84
void entry_002a2b24_0x2a2b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2b24_0x2a2b24");
#endif

    ctx->pc = 0x2a2b24u;

    // 0x2a2b24: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2b2c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2B2Cu;
    {
        const bool branch_taken_0x2a2b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2b2c) {
            ctx->pc = 0x2A2B84u;
            return;
        }
    }
    ctx->pc = 0x2A2B34u;
    // 0x2a2b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2b38: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2b44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b48: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2a2b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a2b4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a2b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2b54: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b58: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a2b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2b5c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a2b64: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a2b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2b6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b70: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2a2b74: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2a2b78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b7c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2b80: 0xa4a40044  sh          $a0, 0x44($a1)
    ctx->pc = 0x2a2b80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2a2b84u;
}
