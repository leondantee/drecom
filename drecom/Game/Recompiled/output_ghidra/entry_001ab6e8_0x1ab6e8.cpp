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

// Function: entry_001ab6e8
// Address: 0x1ab6e8 - 0x1ab774
void entry_001ab6e8_0x1ab6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab6e8_0x1ab6e8");
#endif

    ctx->pc = 0x1ab6e8u;

label_1ab6e8:
    // 0x1ab6e8: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1ab6ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab6f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab6f4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab6f8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab6fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab700: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab700u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab704: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1ab704u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1ab708: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1ab70c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ab70cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ab710: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AB710u;
    {
        const bool branch_taken_0x1ab710 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab710) {
            ctx->pc = 0x1AB6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab6e8;
        }
    }
    ctx->pc = 0x1AB718u;
    // 0x1ab718: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1ab718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab71c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab720: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ab720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ab724: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ab728: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1ab72c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab730: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab734: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab738: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab73c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab740: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab744: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab748: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1ab748u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1ab74c: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x1ab74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ab750: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1ab750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab754: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab758: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ab75c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab760: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ab760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab764: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ab768: 0x2463cfc0  addiu       $v1, $v1, -0x3040
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x1ab76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab770: 0x24701000  addiu       $s0, $v1, 0x1000
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    ctx->pc = 0x1ab774u;
}
