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

// Function: entry_0032bdb8
// Address: 0x32bdb8 - 0x32be88
void entry_0032bdb8_0x32bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bdb8_0x32bdb8");
#endif

    ctx->pc = 0x32bdb8u;

    // 0x32bdb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32bdbc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x32bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bdc0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32bdc4: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x32bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32bdc8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x32bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32bdcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bdd0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x32bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bdd4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32bdd8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32bddc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32bde0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x32bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32bde4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x32bde8: 0x2663ffdf  addiu       $v1, $s3, -0x21
    ctx->pc = 0x32bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967263));
    // 0x32bdec: 0x8ec228c4  lw          $v0, 0x28C4($s6)
    ctx->pc = 0x32bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10436)));
    // 0x32bdf0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32bdf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32bdf4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32bdf8: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x32bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x32bdfc: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x32bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32be00: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32be00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32be04: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32be04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32be08: 0x0  nop
    ctx->pc = 0x32be08u;
    // NOP
    // 0x32be0c: 0x1010  mfhi        $v0
    ctx->pc = 0x32be0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32be10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32be10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32be14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32be18: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x32be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x32be1c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32be1cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32be20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32be24: 0x2443ffdf  addiu       $v1, $v0, -0x21
    ctx->pc = 0x32be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
    // 0x32be28: 0x8ec228c4  lw          $v0, 0x28C4($s6)
    ctx->pc = 0x32be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10436)));
    // 0x32be2c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32be2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32be30: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32be34: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x32be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x32be38: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x32be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32be3c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32be3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32be40: 0x3afc2  srl         $s5, $v1, 31
    ctx->pc = 0x32be40u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x32be44: 0x0  nop
    ctx->pc = 0x32be44u;
    // NOP
    // 0x32be48: 0x1010  mfhi        $v0
    ctx->pc = 0x32be48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32be4c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x32be4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32be50: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x32be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x32be54: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x32be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x32be58: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32be5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32be60: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32be60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32be64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32be64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32be68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32be6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BE6Cu;
    {
        const bool branch_taken_0x32be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be6c) {
            ctx->pc = 0x32BE88u;
            return;
        }
    }
    ctx->pc = 0x32BE74u;
    // 0x32be74: 0x26730176  addiu       $s3, $s3, 0x176
    ctx->pc = 0x32be74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32be78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32be7c: 0x24420176  addiu       $v0, $v0, 0x176
    ctx->pc = 0x32be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 374));
    // 0x32be80: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32be80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32be84: 0x0  nop
    ctx->pc = 0x32be84u;
    // NOP
    ctx->pc = 0x32be88u;
}
