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

// Function: entry_003293b8
// Address: 0x3293b8 - 0x329470
void entry_003293b8_0x3293b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003293b8_0x3293b8");
#endif

    ctx->pc = 0x3293b8u;

    // 0x3293b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3293b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3293bc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3293bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3293c0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3293c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3293c4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3293c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3293c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3293cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3293ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3293d0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x3293d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3293d4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3293d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3293d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3293d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3293dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3293dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3293e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3293e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3293e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3293e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3293e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3293ec: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x3293ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x3293f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3293f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3293f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3293f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3293f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3293F8u;
    {
        const bool branch_taken_0x3293f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3293f8) {
            ctx->pc = 0x329470u;
            return;
        }
    }
    ctx->pc = 0x329400u;
    // 0x329400: 0x2643ffdf  addiu       $v1, $s2, -0x21
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967263));
    // 0x329404: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x329408: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x329408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32940c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329410: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329414: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x329418: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x329418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32941c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329420: 0x0  nop
    ctx->pc = 0x329420u;
    // NOP
    // 0x329424: 0x1010  mfhi        $v0
    ctx->pc = 0x329424u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x329428: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x329428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32942c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329430: 0x24520021  addiu       $s2, $v0, 0x21
    ctx->pc = 0x329430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x329434: 0x2683ffdf  addiu       $v1, $s4, -0x21
    ctx->pc = 0x329434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967263));
    // 0x329438: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x32943c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32943cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x329440: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x329440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329444: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329448: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32944c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32944cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329450: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x329450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329454: 0x0  nop
    ctx->pc = 0x329454u;
    // NOP
    // 0x329458: 0x1010  mfhi        $v0
    ctx->pc = 0x329458u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32945c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32945cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x329460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329464: 0x24540021  addiu       $s4, $v0, 0x21
    ctx->pc = 0x329464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x329468: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x329468u;
    {
        const bool branch_taken_0x329468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329468) {
            ctx->pc = 0x3294D8u;
            return;
        }
    }
    ctx->pc = 0x329470u;
}
