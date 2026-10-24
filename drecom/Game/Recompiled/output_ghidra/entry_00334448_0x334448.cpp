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

// Function: entry_00334448
// Address: 0x334448 - 0x3344d8
void entry_00334448_0x334448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334448_0x334448");
#endif

    ctx->pc = 0x334448u;

    // 0x334448: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x334448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33444c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334450: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x334454: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x334454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x334458: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x334458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33445c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x33445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x334460: 0x0  nop
    ctx->pc = 0x334460u;
    // NOP
    // 0x334464: 0x2010  mfhi        $a0
    ctx->pc = 0x334464u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334468: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x334468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33446c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x33446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x334470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334474: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x334474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x334478: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x334478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33447c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x33447cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x334480: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x334480u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x334484: 0x0  nop
    ctx->pc = 0x334484u;
    // NOP
    // 0x334488: 0x1010  mfhi        $v0
    ctx->pc = 0x334488u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33448c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x334490: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x334490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x334494: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x334494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x334498: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x334498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33449c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3344a0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x3344a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x3344a4: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x3344a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x3344a8: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x3344a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3344ac: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x3344acu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3344b0: 0x0  nop
    ctx->pc = 0x3344b0u;
    // NOP
    // 0x3344b4: 0x1010  mfhi        $v0
    ctx->pc = 0x3344b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3344b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3344bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3344c0: 0x471825  or          $v1, $v0, $a3
    ctx->pc = 0x3344c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3344c4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3344c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3344cc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3344ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3344d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3344d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3344d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3344d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x3344d8u;
}
