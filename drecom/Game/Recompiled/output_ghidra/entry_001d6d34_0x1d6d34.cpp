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

// Function: entry_001d6d34
// Address: 0x1d6d34 - 0x1d6ec4
void entry_001d6d34_0x1d6d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6d34_0x1d6d34");
#endif

    ctx->pc = 0x1d6d34u;

label_1d6d34:
    // 0x1d6d34: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1d6d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d6d38: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d6d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d3c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d6d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6d40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d44: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6d48: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x1d6d48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d6d4c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1d6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6d50: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1d6d50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6d54: 0x0  nop
    ctx->pc = 0x1d6d54u;
    // NOP
    // 0x1d6d58: 0x0  nop
    ctx->pc = 0x1d6d58u;
    // NOP
    // 0x1d6d5c: 0x8012  mflo        $s0
    ctx->pc = 0x1d6d5cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1d6d60: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6d64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d6d68: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6d6c: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d6d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d6d70: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d6d70u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d6d74: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d6d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6d78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d6d80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d84: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1d6d84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6d88: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1d6d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1d6d8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d6d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d90: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x1d6d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1d6d94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6d98: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6d9c: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x1d6d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d6da0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6da4: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1d6da4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6da8: 0x0  nop
    ctx->pc = 0x1d6da8u;
    // NOP
    // 0x1d6dac: 0x0  nop
    ctx->pc = 0x1d6dacu;
    // NOP
    // 0x1d6db0: 0x8012  mflo        $s0
    ctx->pc = 0x1d6db0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1d6db4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6db8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1d6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d6dbc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6dc0: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d6dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d6dc4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d6dc4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d6dc8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x1d6dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1d6dcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d6dd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6dd8: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x1d6dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6ddc: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1d6ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1d6de0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d6de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6de4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1d6de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1d6de8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6dec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6decu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6df0: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x1d6df0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d6df4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1d6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6df8: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1d6df8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6dfc: 0x0  nop
    ctx->pc = 0x1d6dfcu;
    // NOP
    // 0x1d6e00: 0x0  nop
    ctx->pc = 0x1d6e00u;
    // NOP
    // 0x1d6e04: 0x8012  mflo        $s0
    ctx->pc = 0x1d6e04u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1d6e08: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6e0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d6e10: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6e14: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d6e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d6e18: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d6e18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d6e1c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1d6e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1d6e20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d6e28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e2c: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x1d6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6e30: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x1d6e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1d6e34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d6e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e38: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1d6e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1d6e3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e40: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6e44: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x1d6e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d6e48: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6e4c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1d6e4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6e50: 0x0  nop
    ctx->pc = 0x1d6e50u;
    // NOP
    // 0x1d6e54: 0x0  nop
    ctx->pc = 0x1d6e54u;
    // NOP
    // 0x1d6e58: 0x8012  mflo        $s0
    ctx->pc = 0x1d6e58u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1d6e5c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1d6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6e60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1d6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d6e64: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d6e68: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d6e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d6e6c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d6e6cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d6e70: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1d6e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1d6e74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d6e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d6e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d6e80: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x1d6e80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6e84: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d6e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d6e88: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d6e8c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d6e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1d6e90: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d6e90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d6e94: 0x16a0ffa7  bnez        $s5, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1D6E94u;
    {
        const bool branch_taken_0x1d6e94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e94) {
            ctx->pc = 0x1D6D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6d34;
        }
    }
    ctx->pc = 0x1D6E9Cu;
    // 0x1d6e9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d6e9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6ea0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d6ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6ea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d6ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6ea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d6ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6eb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d6ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6EC4u;
}
