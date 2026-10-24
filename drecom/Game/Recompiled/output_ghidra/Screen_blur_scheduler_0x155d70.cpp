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

// Function: Screen_blur_scheduler
// Address: 0x155d70 - 0x155f68
void Screen_blur_scheduler_0x155d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Screen_blur_scheduler_0x155d70");
#endif

    switch (ctx->pc) {
        case 0x155dd4u: goto label_155dd4;
        case 0x155de0u: goto label_155de0;
        default: break;
    }

    ctx->pc = 0x155d70u;

    // 0x155d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x155d74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x155d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x155d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155d88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155d8c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x155d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x155d90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155d94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155D98u;
    {
        const bool branch_taken_0x155d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d98) {
            ctx->pc = 0x155DB0u;
            goto label_155db0;
        }
    }
    ctx->pc = 0x155DA0u;
    // 0x155da0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155da4: 0xa0204f10  sb          $zero, 0x4F10($at)
    ctx->pc = 0x155da4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    // 0x155da8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155DA8u;
    {
        const bool branch_taken_0x155da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155da8) {
            ctx->pc = 0x155DC4u;
            goto label_155dc4;
        }
    }
    ctx->pc = 0x155DB0u;
label_155db0:
    // 0x155db0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155db4: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x155db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x155db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x155db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155dbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155dc0: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x155dc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
label_155dc4:
    // 0x155dc4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x155dc8: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x155dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x155dcc: 0xc0557dc  jal         func_155F70
    ctx->pc = 0x155DCCu;
    SET_GPR_U32(ctx, 31, 0x155DD4u);
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155DCCu, 0x155DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DD4u;
label_155dd4:
    // 0x155dd4: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x155dd8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x155DD8u;
    {
        const bool branch_taken_0x155dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155dd8) {
            ctx->pc = 0x155F38u;
            goto label_155f38;
        }
    }
    ctx->pc = 0x155DE0u;
label_155de0:
    // 0x155de0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x155de4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x155de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x155de8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155dec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155df0: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155df4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155df8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155e04: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x155E04u;
    {
        const bool branch_taken_0x155e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e04) {
            ctx->pc = 0x155F30u;
            goto label_155f30;
        }
    }
    ctx->pc = 0x155E0Cu;
    // 0x155e0c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x155e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155e10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155E10u;
    {
        const bool branch_taken_0x155e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e10) {
            ctx->pc = 0x155E2Cu;
            goto label_155e2c;
        }
    }
    ctx->pc = 0x155E18u;
    // 0x155e18: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x155e18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155e20: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x155e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x155e24: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x155E24u;
    {
        const bool branch_taken_0x155e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e24) {
            ctx->pc = 0x155F30u;
            goto label_155f30;
        }
    }
    ctx->pc = 0x155E2Cu;
label_155e2c:
    // 0x155e2c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x155e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x155e30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e34: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e3c: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x155e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x155e40: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155e44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e4c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155E4Cu;
    {
        const bool branch_taken_0x155e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155e4c) {
            ctx->pc = 0x155E68u;
            goto label_155e68;
        }
    }
    ctx->pc = 0x155E54u;
    // 0x155e54: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e5c: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x155e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x155e60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155E60u;
    {
        const bool branch_taken_0x155e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e60) {
            ctx->pc = 0x155EA0u;
            goto label_155ea0;
        }
    }
    ctx->pc = 0x155E68u;
label_155e68:
    // 0x155e68: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155e6c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e74: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x155e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155e78: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155e7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155e80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155e80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155e84: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x155e84u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155e88: 0x0  nop
    ctx->pc = 0x155e88u;
    // NOP
    // 0x155e8c: 0x0  nop
    ctx->pc = 0x155e8cu;
    // NOP
    // 0x155e90: 0x2012  mflo        $a0
    ctx->pc = 0x155e90u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x155e94: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x155e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x155e98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155e9c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_155ea0:
    // 0x155ea0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155ea4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x155ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155ea8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x155ea8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x155eac: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155eb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155eb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155eb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155eb8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x155EB8u;
    {
        const bool branch_taken_0x155eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155eb8) {
            ctx->pc = 0x155EF8u;
            goto label_155ef8;
        }
    }
    ctx->pc = 0x155EC0u;
    // 0x155ec0: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x155ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x155ec4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155ec8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155ecc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155ECCu;
    {
        const bool branch_taken_0x155ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155ecc) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155ED4u;
    // 0x155ed4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ed8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155edc: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ee0: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ee4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ee8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155eec: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155EF0u;
    {
        const bool branch_taken_0x155ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ef0) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155EF8u;
label_155ef8:
    // 0x155ef8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155f00: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x155f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x155f04: 0x0  nop
    ctx->pc = 0x155f04u;
    // NOP
label_155f08:
    // 0x155f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155f0c: 0x90234f10  lbu         $v1, 0x4F10($at)
    ctx->pc = 0x155f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x155f10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155f14: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x155f14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x155f18: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x155F18u;
    {
        const bool branch_taken_0x155f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f18) {
            ctx->pc = 0x155F30u;
            goto label_155f30;
        }
    }
    ctx->pc = 0x155F20u;
    // 0x155f20: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x155f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155f24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155f28: 0xa0234f10  sb          $v1, 0x4F10($at)
    ctx->pc = 0x155f28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    // 0x155f2c: 0x0  nop
    ctx->pc = 0x155f2cu;
    // NOP
label_155f30:
    // 0x155f30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x155f34: 0x0  nop
    ctx->pc = 0x155f34u;
    // NOP
label_155f38:
    // 0x155f38: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x155f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x155f3c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x155f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155f40: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x155F40u;
    {
        const bool branch_taken_0x155f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f40) {
            ctx->pc = 0x155DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155de0;
        }
    }
    ctx->pc = 0x155F48u;
    // 0x155f48: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x155f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155f4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f5c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x155f60: 0x3e00008  jr          $ra
    ctx->pc = 0x155F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F68u;
}
