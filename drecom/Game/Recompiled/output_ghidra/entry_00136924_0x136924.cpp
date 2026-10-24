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

// Function: entry_00136924
// Address: 0x136924 - 0x1369b0
void entry_00136924_0x136924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136924_0x136924");
#endif

    ctx->pc = 0x136924u;

    // 0x136924: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x136924u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x136928: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x136928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13692c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x13692cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x136930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x136934: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x136934u;
    {
        const bool branch_taken_0x136934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x136934) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x13693Cu;
    // 0x13693c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x13693cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x136940: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136944: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x136944u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x136948: 0x4600019  bltz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x136948u;
    {
        const bool branch_taken_0x136948 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136948) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x136950u;
    // 0x136950: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x136950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136954: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x136954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136958: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x136958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13695c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13695Cu;
    {
        const bool branch_taken_0x13695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13695c) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x136964u;
    // 0x136964: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x136964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136968: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x136968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13696c: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x13696cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x136970: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x136970u;
    {
        const bool branch_taken_0x136970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136970) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x136978u;
    // 0x136978: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x136978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13697c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x136980: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136984: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x136984u;
    {
        const bool branch_taken_0x136984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136984) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x13698Cu;
    // 0x13698c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x13698cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x136990: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x136990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x136994: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x136994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x136998: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136998u;
    {
        const bool branch_taken_0x136998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136998) {
            ctx->pc = 0x1369B0u;
            return;
        }
    }
    ctx->pc = 0x1369A0u;
    // 0x1369a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1369a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1369a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1369a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1369ac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1369acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1369b0u;
}
