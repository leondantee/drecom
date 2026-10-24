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

// Function: entry_00221980
// Address: 0x221980 - 0x221a38
void entry_00221980_0x221980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221980_0x221980");
#endif

    ctx->pc = 0x221980u;

    // 0x221980: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221984: 0x948411f6  lhu         $a0, 0x11F6($a0)
    ctx->pc = 0x221984u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x221988: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x221988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x22198c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x22198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x221990: 0x2463ad70  addiu       $v1, $v1, -0x5290
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946160));
    // 0x221994: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x221994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x221998: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x221998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22199c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x22199cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2219a0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2219a4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2219a8: 0x84a4005e  lh          $a0, 0x5E($a1)
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x2219ac: 0x861823  subu        $v1, $a0, $a2
    ctx->pc = 0x2219acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2219b0: 0xa4a3005e  sh          $v1, 0x5E($a1)
    ctx->pc = 0x2219b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x2219b4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2219b8: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2219bc: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2219bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2219c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2219c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2219c4: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x2219c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2219c8: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2219C8u;
    {
        const bool branch_taken_0x2219c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2219c8) {
            ctx->pc = 0x221A38u;
            return;
        }
    }
    ctx->pc = 0x2219D0u;
    // 0x2219d0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2219d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2219d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2219d8: 0x8483005e  lh          $v1, 0x5E($a0)
    ctx->pc = 0x2219d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2219dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2219dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2219e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2219e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2219e4: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2219E4u;
    {
        const bool branch_taken_0x2219e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2219e4) {
            ctx->pc = 0x221A38u;
            return;
        }
    }
    ctx->pc = 0x2219ECu;
    // 0x2219ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2219ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2219f0: 0x8c311a98  lw          $s1, 0x1A98($at)
    ctx->pc = 0x2219f0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2219f4: 0x32238000  andi        $v1, $s1, 0x8000
    ctx->pc = 0x2219f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x2219f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2219F8u;
    {
        const bool branch_taken_0x2219f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2219f8) {
            ctx->pc = 0x221A38u;
            return;
        }
    }
    ctx->pc = 0x221A00u;
    // 0x221a00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221a04: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x221a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x221a0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221a10: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x221a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x221a18: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a1c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x221a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x221a20: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x221a28: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x221a30: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x221A30u;
    {
        const bool branch_taken_0x221a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a30) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221A38u;
}
