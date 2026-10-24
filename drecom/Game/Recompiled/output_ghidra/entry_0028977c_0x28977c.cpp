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

// Function: entry_0028977c
// Address: 0x28977c - 0x28980c
void entry_0028977c_0x28977c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028977c_0x28977c");
#endif

    ctx->pc = 0x28977cu;

    // 0x28977c: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x28977cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289784: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x289784u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x289788: 0x35285556  ori         $t0, $t1, 0x5556
    ctx->pc = 0x289788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x28978c: 0x10b0018  mult        $zero, $t0, $t3
    ctx->pc = 0x28978cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289790: 0xb47c2  srl         $t0, $t3, 31
    ctx->pc = 0x289790u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x289794: 0x0  nop
    ctx->pc = 0x289794u;
    // NOP
    // 0x289798: 0x5010  mfhi        $t2
    ctx->pc = 0x289798u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28979c: 0x1486021  addu        $t4, $t2, $t0
    ctx->pc = 0x28979cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2897a0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2897a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2897a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2897a8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x2897a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x2897ac: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x2897acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x2897b0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x2897b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2897b4: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2897b8: 0x0  nop
    ctx->pc = 0x2897b8u;
    // NOP
    // 0x2897bc: 0x3010  mfhi        $a2
    ctx->pc = 0x2897bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2897c0: 0xcb4021  addu        $t0, $a2, $t3
    ctx->pc = 0x2897c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2897c4: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x2897c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2897c8: 0x1835025  or          $t2, $t4, $v1
    ctx->pc = 0x2897c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2897cc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2897ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2897d0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2897d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2897d4: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2897d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2897d8: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x2897d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2897dc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2897dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2897e0: 0x24fc2  srl         $t1, $v0, 31
    ctx->pc = 0x2897e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2897e4: 0x0  nop
    ctx->pc = 0x2897e4u;
    // NOP
    // 0x2897e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2897e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2897ec: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x2897ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2897f0: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x2897f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2897f4: 0xea3025  or          $a2, $a3, $t2
    ctx->pc = 0x2897f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x2897f8: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2897f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2897fc: 0x83e00  sll         $a3, $t0, 24
    ctx->pc = 0x2897fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x289800: 0xe64825  or          $t1, $a3, $a2
    ctx->pc = 0x289800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x289804: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x289804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289808: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x289808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x28980cu;
}
