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

// Function: entry_00214134
// Address: 0x214134 - 0x214180
void entry_00214134_0x214134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214134_0x214134");
#endif

    ctx->pc = 0x214134u;

    // 0x214134: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x214138: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x214138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x21413c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x21413cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x214140: 0x24849fc0  addiu       $a0, $a0, -0x6040
    ctx->pc = 0x214140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942656));
    // 0x214144: 0x24429e80  addiu       $v0, $v0, -0x6180
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
    // 0x214148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x214148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21414c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21414cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x214150: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x214150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x214154: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x214154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x214158: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x214158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x21415c: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x21415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x214160: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x214160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x214164: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x214164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x214168: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x214168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21416c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x21416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x214170: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x214170u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x20619E84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x20619E84u, _value); } while (0);
    // 0x214174: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x214174u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x20619E86u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20619E86u, _value); } while (0);
    // 0x214178: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x214178u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x20619E87u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20619E87u, _value); } while (0);
    // 0x21417c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21417cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x20619E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x20619E88u, _value); } while (0);
    ctx->pc = 0x214180u;
}
