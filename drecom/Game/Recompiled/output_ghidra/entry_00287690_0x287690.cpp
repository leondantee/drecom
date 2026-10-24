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

// Function: entry_00287690
// Address: 0x287690 - 0x287720
void entry_00287690_0x287690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287690_0x287690");
#endif

    ctx->pc = 0x287690u;

    // 0x287690: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x287690u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287698: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x287698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x28769c: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x28769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2876a0: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x2876a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876a4: 0xb4fc2  srl         $t1, $t3, 31
    ctx->pc = 0x2876a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2876a8: 0x0  nop
    ctx->pc = 0x2876a8u;
    // NOP
    // 0x2876ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2876acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2876b0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2876b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2876b4: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x2876b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2876b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2876b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2876bc: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x2876c0: 0x34c35556  ori         $v1, $a2, 0x5556
    ctx->pc = 0x2876c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x2876c4: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x2876c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876c8: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x2876c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2876cc: 0x0  nop
    ctx->pc = 0x2876ccu;
    // NOP
    // 0x2876d0: 0x5010  mfhi        $t2
    ctx->pc = 0x2876d0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2876d4: 0x1464821  addu        $t1, $t2, $a2
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2876d8: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x2876d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x2876dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2876dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2876e0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2876e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2876e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2876e8: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2876e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2876ec: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x2876ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2876f0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2876f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2876f4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2876f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2876f8: 0x0  nop
    ctx->pc = 0x2876f8u;
    // NOP
    // 0x2876fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2876fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x287700: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x287704: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x287704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287708: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x287708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28770c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x28770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287710: 0x43600  sll         $a2, $a0, 24
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x287714: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x287714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x287718: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x287718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28771c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28771cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x287720u;
}
