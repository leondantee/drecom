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

// Function: entry_0037a3f8
// Address: 0x37a3f8 - 0x37a498
void entry_0037a3f8_0x37a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a3f8_0x37a3f8");
#endif

    ctx->pc = 0x37a3f8u;

    // 0x37a3f8: 0x8fc35dc0  lw          $v1, 0x5DC0($fp)
    ctx->pc = 0x37a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24000)));
    // 0x37a3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a400: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x37A400u;
    {
        const bool branch_taken_0x37a400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37a400) {
            ctx->pc = 0x37A498u;
            return;
        }
    }
    ctx->pc = 0x37A408u;
    // 0x37a408: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x37a408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a40c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a410: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37a414: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x37a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37a418: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x37a418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a41c: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x37a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37a420: 0x0  nop
    ctx->pc = 0x37a420u;
    // NOP
    // 0x37a424: 0x1810  mfhi        $v1
    ctx->pc = 0x37a424u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37a428: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a42c: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x37a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a430: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a434: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x37a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x37a438: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x37a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x37a43c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x37a43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a440: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x37a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37a444: 0x0  nop
    ctx->pc = 0x37a444u;
    // NOP
    // 0x37a448: 0x3010  mfhi        $a2
    ctx->pc = 0x37a448u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x37a44c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37a450: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x37a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x37a454: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37a454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a458: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a45c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a460: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x37a460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x37a464: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x37a464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x37a468: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x37a468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a46c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x37a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x37a470: 0x0  nop
    ctx->pc = 0x37a470u;
    // NOP
    // 0x37a474: 0x2010  mfhi        $a0
    ctx->pc = 0x37a474u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x37a478: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x37a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37a47c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a480: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a484: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a488: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x37a488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x37a48c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37a490: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a494: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x37a498u;
}
