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

// Function: entry_00210a78
// Address: 0x210a78 - 0x210b64
void entry_00210a78_0x210a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210a78_0x210a78");
#endif

    ctx->pc = 0x210a78u;

    // 0x210a78: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210a7c: 0x84721278  lh          $s2, 0x1278($v1)
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210a80: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x210a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x210a84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210a84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x210a88: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x210a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x210a8c: 0x14200190  bnez        $at, . + 4 + (0x190 << 2)
    ctx->pc = 0x210A8Cu;
    {
        const bool branch_taken_0x210a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a8c) {
            ctx->pc = 0x2110D0u;
            return;
        }
    }
    ctx->pc = 0x210A94u;
    // 0x210a94: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210a98: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x210a9c: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x210a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x210aa0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x210aa0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x210aa4: 0x2a410280  slti        $at, $s2, 0x280
    ctx->pc = 0x210aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x210aa8: 0x10200189  beqz        $at, . + 4 + (0x189 << 2)
    ctx->pc = 0x210AA8u;
    {
        const bool branch_taken_0x210aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210aa8) {
            ctx->pc = 0x2110D0u;
            return;
        }
    }
    ctx->pc = 0x210AB0u;
    // 0x210ab0: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x210ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x210ab4: 0x26c6a570  addiu       $a2, $s6, -0x5A90
    ctx->pc = 0x210ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944112));
    // 0x210ab8: 0x27a70380  addiu       $a3, $sp, 0x380
    ctx->pc = 0x210ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210abc: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x210abcu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x38A570u));
    // 0x210ac0: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x210ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x210ac4: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x210ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x210ac8: 0x252aa580  addiu       $t2, $t1, -0x5A80
    ctx->pc = 0x210ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944128));
    // 0x210acc: 0x27a30390  addiu       $v1, $sp, 0x390
    ctx->pc = 0x210accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210ad0: 0x79540000  lq          $s4, 0x0($t2)
    ctx->pc = 0x210ad0u;
    SET_GPR_VEC(ctx, 20, FAST_READ128(0x38A580u));
    // 0x210ad4: 0x7c740000  sq          $s4, 0x0($v1)
    ctx->pc = 0x210ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 20));
    // 0x210ad8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x210ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x210adc: 0x2483a590  addiu       $v1, $a0, -0x5A70
    ctx->pc = 0x210adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944144));
    // 0x210ae0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x210ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x210ae4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x210ae4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A590u));
    // 0x210ae8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x210aec: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x210af0: 0x24a3a5a0  addiu       $v1, $a1, -0x5A60
    ctx->pc = 0x210af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944160));
    // 0x210af4: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x210af8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x210af8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A5A0u));
    // 0x210afc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210afcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x210b00: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x210b00u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x210b04: 0x26e7a5b0  addiu       $a3, $s7, -0x5A50
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944176));
    // 0x210b08: 0x27a80480  addiu       $t0, $sp, 0x480
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x210b0c: 0x78eb0000  lq          $t3, 0x0($a3)
    ctx->pc = 0x210b0cu;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x38A5B0u));
    // 0x210b10: 0x7d0b0000  sq          $t3, 0x0($t0)
    ctx->pc = 0x210b10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 11));
    // 0x210b14: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x210b18: 0x252aa5c0  addiu       $t2, $t1, -0x5A40
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944192));
    // 0x210b1c: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x210b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x210b20: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x210b20u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A5C0u));
    // 0x210b24: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x210b24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x210b28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210b2c: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x210b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619530u, _value); } while (0);
    // 0x210b30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210b34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210b38: 0xac269538  sw          $a2, -0x6AC8($at)
    ctx->pc = 0x210b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    // 0x210b3c: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210b40: 0x85491278  lh          $t1, 0x1278($t2)
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x210b44: 0x91c3c  dsll32      $v1, $t1, 16
    ctx->pc = 0x210b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 16));
    // 0x210b48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210b48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210b4c: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x210b50: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210B50u;
    {
        const bool branch_taken_0x210b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b50) {
            ctx->pc = 0x210B64u;
            return;
        }
    }
    ctx->pc = 0x210B58u;
    // 0x210b58: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210b5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210b60: 0xac2a9538  sw          $t2, -0x6AC8($at)
    ctx->pc = 0x210b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210b64u;
}
