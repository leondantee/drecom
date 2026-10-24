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

// Function: entry_00291bc8
// Address: 0x291bc8 - 0x291c88
void entry_00291bc8_0x291bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291bc8_0x291bc8");
#endif

    switch (ctx->pc) {
        case 0x291c3cu: goto label_291c3c;
        case 0x291c78u: goto label_291c78;
        default: break;
    }

    ctx->pc = 0x291bc8u;

    // 0x291bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291bcc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291bd0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291bd4: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x291bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291bd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291bdc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291be0: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x291be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291be4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x291be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x291be8: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x291be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291bec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x291bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291bf4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291bf8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291bfc: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291c00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291c04: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x291c04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291c08: 0x0  nop
    ctx->pc = 0x291c08u;
    // NOP
    // 0x291c0c: 0x0  nop
    ctx->pc = 0x291c0cu;
    // NOP
    // 0x291c10: 0x1012  mflo        $v0
    ctx->pc = 0x291c10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x291c14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x291c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291c18: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291c18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291c1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x291c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291c20: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291c24: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291c24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291c28: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291c2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c30: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291c30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291c34: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291C34u;
    SET_GPR_U32(ctx, 31, 0x291C3Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291C34u, 0x291C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C3Cu;
label_291c3c:
    // 0x291c3c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291c40: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291c40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291c44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291c48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291c50: 0x34431048  ori         $v1, $v0, 0x1048
    ctx->pc = 0x291c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291c54: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x291c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x291c58: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291c5c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291c60: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291c64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c68: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x291c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x291c6c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291c70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291C70u;
    SET_GPR_U32(ctx, 31, 0x291C78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291C70u, 0x291C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C78u;
label_291c78:
    // 0x291c78: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x291c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291c7c: 0x71008e28  paddub      $s1, $t0, $zero
    ctx->pc = 0x291c7cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x291c80: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x291C80u;
    {
        const bool branch_taken_0x291c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c80) {
            ctx->pc = 0x291EA8u;
            return;
        }
    }
    ctx->pc = 0x291C88u;
}
