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

// Function: entry_0033c0f8
// Address: 0x33c0f8 - 0x33c180
void entry_0033c0f8_0x33c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c0f8_0x33c0f8");
#endif

    ctx->pc = 0x33c0f8u;

    // 0x33c0f8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c0fc: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33c100: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33c100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33c104: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x33C104u;
    {
        const bool branch_taken_0x33c104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c104) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33C10Cu;
    // 0x33c10c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c10cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c110: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c114: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x33c118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c11c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c120: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x33c124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c128: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c12c: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x33c130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c134: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c138: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x33c13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c140: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c144: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x33c148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c14c: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c150: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x33c154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c158: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33c158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c15c: 0xa20000b8  sb          $zero, 0xB8($s0)
    ctx->pc = 0x33c15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c160: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x33c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33c164: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x33C164u;
    {
        const bool branch_taken_0x33c164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c164) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33C16Cu;
    // 0x33c16c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c170: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33c170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c174: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x33c174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c178: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x33C178u;
    {
        const bool branch_taken_0x33c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c178) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33C180u;
}
