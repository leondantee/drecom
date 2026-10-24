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

// Function: entry_00333e94
// Address: 0x333e94 - 0x333f28
void entry_00333e94_0x333e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333e94_0x333e94");
#endif

    ctx->pc = 0x333e94u;

    // 0x333e94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x333e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333e98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333e9c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x333e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x333ea0: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x333ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x333ea4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x333ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ea8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x333ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x333eac: 0x0  nop
    ctx->pc = 0x333eacu;
    // NOP
    // 0x333eb0: 0x1010  mfhi        $v0
    ctx->pc = 0x333eb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x333eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333eb8: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x333eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333ebc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333ec0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x333ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x333ec4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x333ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x333ec8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x333ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ecc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x333eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x333ed0: 0x0  nop
    ctx->pc = 0x333ed0u;
    // NOP
    // 0x333ed4: 0x1810  mfhi        $v1
    ctx->pc = 0x333ed4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333edc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x333edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x333ee0: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x333ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x333ee4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x333ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333ee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333eec: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333ef0: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x333ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333ef4: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x333ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ef8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x333efc: 0x0  nop
    ctx->pc = 0x333efcu;
    // NOP
    // 0x333f00: 0x1010  mfhi        $v0
    ctx->pc = 0x333f00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x333f04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x333f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x333f08: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x333f08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333f0c: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x333f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x333f10: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333f14: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x333f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333f18: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x333f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x333f1c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x333f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333f20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x333f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x333f24: 0x0  nop
    ctx->pc = 0x333f24u;
    // NOP
    ctx->pc = 0x333f28u;
}
